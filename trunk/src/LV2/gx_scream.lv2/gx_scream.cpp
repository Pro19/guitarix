/*
 * Copyright (C) 2014 Guitarix project MOD project
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
#include "gx_scream.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "scream.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace scream {

class Gx_scream_
{
private:
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*  scream;
  // private functions
  inline void run_dsp_(uint32_t n_samples);
  inline void connect_(uint32_t port,void* data);
  inline void init_dsp_(uint32_t rate);
  inline void connect_all__ports(uint32_t port, void* data);
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
  Gx_scream_();
  ~Gx_scream_();
};

// constructor
Gx_scream_::Gx_scream_() :
  output(NULL),
  input(NULL),
  scream(scream::plugin()) {};

// destructor
Gx_scream_::~Gx_scream_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (scream->activate_plugin !=0)
    scream->activate_plugin(false, scream);
  // delete DSP class
  scream->delete_instance(scream);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_scream_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  scream->set_samplerate(rate, scream); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_scream_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    default:
      break;
    }
}

void Gx_scream_::activate_f()
{
  // allocate the internal DSP mem
  if (scream->activate_plugin !=0)
    scream->activate_plugin(true, scream);
}

void Gx_scream_::clean_up()
{
  // delete the internal DSP mem
  if (scream->activate_plugin !=0)
    scream->activate_plugin(false, scream);
}

void Gx_scream_::deactivate_f()
{
  // delete the internal DSP mem
  if (scream->activate_plugin !=0)
    scream->activate_plugin(false, scream);
}

void Gx_scream_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  scream->mono_audio(static_cast<int>(n_samples), input, output, scream);
}

void Gx_scream_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  scream->connect_ports(port,  data, scream);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_scream_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_scream_ *self = new Gx_scream_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_scream_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_scream_*>(instance)->connect_all__ports(port, data);
}

void Gx_scream_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_scream_*>(instance)->activate_f();
}

void Gx_scream_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_scream_*>(instance)->run_dsp_(n_samples);
}

void Gx_scream_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_scream_*>(instance)->deactivate_f();
}

void Gx_scream_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_scream_* self = static_cast<Gx_scream_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_scream_::descriptor =
{
  GXPLUGIN_URI "#_scream_",
  Gx_scream_::instantiate,
  Gx_scream_::connect_port,
  Gx_scream_::activate,
  Gx_scream_::run,
  Gx_scream_::deactivate,
  Gx_scream_::cleanup,
  NULL
};


} // end namespace scream

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &scream::Gx_scream_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
