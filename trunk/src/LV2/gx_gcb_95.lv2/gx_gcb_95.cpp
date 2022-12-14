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
#include "gx_gcb_95.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
#include "gcb_95.cc"    // dsp class generated by faust -> dsp2cc

////////////////////////////// PLUG-IN CLASS ///////////////////////////

namespace gcb_95 {

class Gx_gcb_95_
{
private:
  // pointer to buffer
  float*      output;
  float*      input;
  // pointer to dsp class
  PluginLV2*  gcb_95;
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
  Gx_gcb_95_();
  ~Gx_gcb_95_();
};

// constructor
Gx_gcb_95_::Gx_gcb_95_() :
  output(NULL),
  input(NULL),
  gcb_95(gcb_95::plugin()) {};

// destructor
Gx_gcb_95_::~Gx_gcb_95_()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (gcb_95->activate_plugin !=0)
    gcb_95->activate_plugin(false, gcb_95);
  // delete DSP class
  gcb_95->delete_instance(gcb_95);
};

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

void Gx_gcb_95_::init_dsp_(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
  gcb_95->set_samplerate(rate, gcb_95); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_gcb_95_::connect_(uint32_t port,void* data)
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

void Gx_gcb_95_::activate_f()
{
  // allocate the internal DSP mem
  if (gcb_95->activate_plugin !=0)
    gcb_95->activate_plugin(true, gcb_95);
}

void Gx_gcb_95_::clean_up()
{
  // delete the internal DSP mem
  if (gcb_95->activate_plugin !=0)
    gcb_95->activate_plugin(false, gcb_95);
}

void Gx_gcb_95_::deactivate_f()
{
  // delete the internal DSP mem
  if (gcb_95->activate_plugin !=0)
    gcb_95->activate_plugin(false, gcb_95);
}

void Gx_gcb_95_::run_dsp_(uint32_t n_samples)
{
  if (n_samples< 1) return;
  gcb_95->mono_audio(static_cast<int>(n_samples), input, output, gcb_95);
}

void Gx_gcb_95_::connect_all__ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_(port,data); 
  // connect the Ports used by the DSP class
  gcb_95->connect_ports(port,  data, gcb_95);
}

////////////////////// STATIC CLASS  FUNCTIONS  ////////////////////////

LV2_Handle 
Gx_gcb_95_::instantiate(const LV2_Descriptor* descriptor,
                            double rate, const char* bundle_path,
                            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_gcb_95_ *self = new Gx_gcb_95_();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_gcb_95_::connect_port(LV2_Handle instance, 
                                   uint32_t port, void* data)
{
  // connect all ports
  static_cast<Gx_gcb_95_*>(instance)->connect_all__ports(port, data);
}

void Gx_gcb_95_::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_gcb_95_*>(instance)->activate_f();
}

void Gx_gcb_95_::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_gcb_95_*>(instance)->run_dsp_(n_samples);
}

void Gx_gcb_95_::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_gcb_95_*>(instance)->deactivate_f();
}

void Gx_gcb_95_::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_gcb_95_* self = static_cast<Gx_gcb_95_*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_gcb_95_::descriptor =
{
  GXPLUGIN_URI "#_gcb_95_",
  Gx_gcb_95_::instantiate,
  Gx_gcb_95_::connect_port,
  Gx_gcb_95_::activate,
  Gx_gcb_95_::run,
  Gx_gcb_95_::deactivate,
  Gx_gcb_95_::cleanup,
  NULL
};


} // end namespace gcb_95

////////////////////////// LV2 SYMBOL EXPORT ///////////////////////////

LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &gcb_95::Gx_gcb_95_::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
