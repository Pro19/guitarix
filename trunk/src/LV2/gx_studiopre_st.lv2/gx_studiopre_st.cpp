/*
 * Copyright (C) 2012 Hermann Meyer, Andreas Degert, Pete Shorthose, Steve Poskitt
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * --------------------------------------------------------------------------
 */


////////////////////////////// LOCAL INCLUDES //////////////////////////

#include "gx_common.h"      // faust support and denormal protection (SSE)
#include "gx_studiopre_st.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
namespace gx_studiopre_st {
#include "gx_studiopre_st.cc"    // dsp class generated by faust -> dsp2cc
#ifndef __SSE__
#include "stereo_noiser.cc"
#endif

////////////////////////////// PLUG-IN CLASS ///////////////////////////

class Gx_studiopre_st
{
private:
  // internal stuff
  float*                       output;
  float*                       input;
  float*                       output1;
  float*                       input1;
  PluginLV2*                   studiopre_stereo;
#ifndef __SSE__
  PluginLV2*                   wn;
#endif

  inline void run_dsp_stereo(uint32_t n_samples);
  inline void connect_stereo(uint32_t port,void* data);
  inline void init_dsp_stereo(uint32_t rate);
  inline void connect_all_stereo_ports(uint32_t port, void* data);
  inline void activate_f();
  inline void clean_up();
  inline void deactivate_f();
  
public:
    // LV2 Descriptor
  static const LV2_Descriptor descriptor;
  // static wrapper to private functions
  static void deactivate(LV2_Handle instance);
  static void cleanup(LV2_Handle instance);
  static void run(LV2_Handle instance, uint32_t n_samples);
  static void activate(LV2_Handle instance);
  static void connect_port(LV2_Handle instance, uint32_t port, void* data);
  static LV2_Handle instantiate(const LV2_Descriptor* descriptor,
                                double rate, const char* bundle_path,
                                const LV2_Feature* const* features);
  Gx_studiopre_st();
  ~Gx_studiopre_st();
};

// constructor
Gx_studiopre_st::Gx_studiopre_st() :
  output(NULL),
  input(NULL),
  output1(NULL),
  input1(NULL),
  studiopre_stereo(gx_studiopre_st::plugin()) {};

// destructor
Gx_studiopre_st::~Gx_studiopre_st()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (studiopre_stereo->activate_plugin !=0)
    studiopre_stereo->activate_plugin(false, studiopre_stereo);
  // delete DSP class
  studiopre_stereo->delete_instance(studiopre_stereo);
};

////////////////////////////// PRIVATE CLASS  FUNCTIONS ////////////////

void Gx_studiopre_st::init_dsp_stereo(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
#ifndef __SSE__
  wn = stereo_noiser::plugin();
  wn->set_samplerate(rate, wn);
#endif
  studiopre_stereo->set_samplerate(rate, studiopre_stereo); // init the DSP class
  
}

// connect the Ports used by the plug-in class
void Gx_studiopre_st::connect_stereo(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_OUTPUT1:
      output1 = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT1:
      input1 = static_cast<float*>(data);
      break;
    default:
      break;
    }
}

void Gx_studiopre_st::activate_f()
{
  // allocate the internal DSP mem
 if (studiopre_stereo->activate_plugin !=0)
    studiopre_stereo->activate_plugin(true, studiopre_stereo);
}

void Gx_studiopre_st::clean_up()
{
#ifndef __SSE__
  wn->delete_instance(wn);;
#endif
  // delete the internal DSP mem
  if (studiopre_stereo->activate_plugin !=0)
    studiopre_stereo->activate_plugin(false, studiopre_stereo);
}

void Gx_studiopre_st::deactivate_f()
{
  // free allocated DSP mem
  if (studiopre_stereo->activate_plugin !=0)
    studiopre_stereo->activate_plugin(false, studiopre_stereo);
}

void Gx_studiopre_st::run_dsp_stereo(uint32_t n_samples)
{
  if (n_samples< 1) return;
#ifndef __SSE__
  wn->stereo_audio(static_cast<int>(n_samples), input, input1, input, input1, wn);;
#endif
  studiopre_stereo->stereo_audio(static_cast<int>(n_samples), input,input1,
                        output, output1, studiopre_stereo);
}

void Gx_studiopre_st::connect_all_stereo_ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_stereo(port,data); 
  // connect the Ports used by the DSP class
  studiopre_stereo->connect_ports(port,  data, studiopre_stereo);
}

//////////////////////// STATIC CLASS  FUNCTIONS ///////////////////////

LV2_Handle
Gx_studiopre_st::instantiate(const LV2_Descriptor*     descriptor,
                            double                    rate,
                            const char*               bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_studiopre_st *self = new Gx_studiopre_st();
  if (!self)
    {
      return NULL;
    }
  self->init_dsp_stereo((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_studiopre_st::connect_port(LV2_Handle instance,
             uint32_t   port,
             void*      data)
{
  // connect all ports
  static_cast<Gx_studiopre_st*>(instance)->connect_all_stereo_ports(port, data);
}

void Gx_studiopre_st::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_studiopre_st*>(instance)->activate_f();
}

void Gx_studiopre_st::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_studiopre_st*>(instance)->run_dsp_stereo(n_samples);
}

void Gx_studiopre_st::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_studiopre_st*>(instance)->deactivate_f();
}

void Gx_studiopre_st::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_studiopre_st* self = static_cast<Gx_studiopre_st*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_studiopre_st::descriptor =
{
  GXPLUGIN_URI "#studiopre_st",
  instantiate,
  connect_port,
  activate,
  run,
  NULL,
  cleanup,
  NULL
};

} //end namespace gx_studiopre_st

///////////////////////////// LV2 DESCRIPTOR ///////////////////////////

LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &gx_studiopre_st::Gx_studiopre_st::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
