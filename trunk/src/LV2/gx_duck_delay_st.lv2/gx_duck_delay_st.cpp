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
#include "gx_bypass.cc"
#include "gx_duck_delay_st.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "duck_delay_st.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace duck_delay_st {

class Gx_duck_delay_st_
{
private:
  GxBypass                     bp;
  float*                       bypass;
  DenormalProtection           MXCSR;
  // pointer to buffer
  float*      output;
  float*      input;
  float*      output1;
  float*      input1;
  // pointer to dsp class
  PluginLV2*  duck_delay_st;
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
  Gx_duck_delay_st_();
  ~Gx_duck_delay_st_();
};

// constructor
Gx_duck_delay_st_::Gx_duck_delay_st_() :
  bp(),
  bypass(0),
  MXCSR(),
  output(NULL),
  input(NULL),
  duck_delay_st(duck_delay_st::plugin()) {};

// destructor
Gx_duck_delay_st_::~Gx_duck_delay_st_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (duck_delay_st->activate_plugin !=0)
    duck_delay_st->activate_plugin(false, duck_delay_st);
  // delete DSP class
  duck_delay_st->delete_instance(duck_delay_st);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_duck_delay_st_::init_dsp_(uint32_t rate)
{
  bp.init_bypass(rate);
  duck_delay_st->set_samplerate(rate, duck_delay_st); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_duck_delay_st_::connect_(uint32_t port,void* data)
{
  switch ((PortIndex)port)
    {
    case EFFECTS_OUTPUT:
      output = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT:
      input = static_cast<float*>(data);
      break;
    case EFFECTS_OUTPUT1:
      output1 = static_cast<float*>(data);
      break;
    case EFFECTS_INPUT1:
      input1 = static_cast<float*>(data);
      break;
    case BYPASS: 
      bypass = static_cast<float*>(data); // , 0.0, 0.0, 1.0, 1.0 
      break;
    default:
      break;
    }
}

void Gx_duck_delay_st_::activate_f()
{
  // allocate the internal DSP mem
  if (duck_delay_st->activate_plugin !=0)
    duck_delay_st->activate_plugin(true, duck_delay_st);
}

void Gx_duck_delay_st_::clean_up()
{
  // delete the internal DSP mem
  if (duck_delay_st->activate_plugin !=0)
    duck_delay_st->activate_plugin(false, duck_delay_st);
}

void Gx_duck_delay_st_::deactivate_f()
{
  // delete the internal DSP mem
  if (duck_delay_st->activate_plugin !=0)
    duck_delay_st->activate_plugin(false, duck_delay_st);
}

void Gx_duck_delay_st_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  MXCSR.set_();
  FAUSTFLOAT buf[n_samples];
  FAUSTFLOAT buf1[n_samples];
  // do inplace processing at default
  if (output != input)
    memcpy(output, input, n_samples*sizeof(float));
  if (output1 != input1)
    memcpy(output1, input1, n_samples*sizeof(float));
  // check if bypass is pressed
  if (!bp.pre_check_bypass(bypass, buf, buf1, input, input1, n_samples))
    duck_delay_st->stereo_audio(static_cast<int>(n_samples), input, input1, output, output1, duck_delay_st);
  bp.post_check_bypass(buf, buf1, output, output1, n_samples);
  MXCSR.reset_();
}

void Gx_duck_delay_st_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  duck_delay_st->connect_ports(port,  data, duck_delay_st);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_duck_delay_st_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_duck_delay_st_ *self = new Gx_duck_delay_st_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_duck_delay_st_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_duck_delay_st_*>(instance)->connect_all__ports(port, data);
}

void Gx_duck_delay_st_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_duck_delay_st_*>(instance)->activate_f();
}

void Gx_duck_delay_st_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_duck_delay_st_*>(instance)->run_dsp_(n_samples);
}

void Gx_duck_delay_st_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_duck_delay_st_*>(instance)->deactivate_f();
}

void Gx_duck_delay_st_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_duck_delay_st_* self = static_cast<Gx_duck_delay_st_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_duck_delay_st_::descriptor =
{
  GXPLUGIN_URI "#_duck_delay_st_",
  Gx_duck_delay_st_::instantiate,
  Gx_duck_delay_st_::connect_port,
  Gx_duck_delay_st_::activate,
  Gx_duck_delay_st_::run,
  Gx_duck_delay_st_::deactivate,
  Gx_duck_delay_st_::cleanup,
  NULL
};

} // end namespace duck_delay_st

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &duck_delay_st::Gx_duck_delay_st_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
