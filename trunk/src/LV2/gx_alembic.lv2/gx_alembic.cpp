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
#include "gx_alembic.h"        // define struct PortIndex
#include "gx_pluginlv2.h"   // define struct PluginLV2
namespace gx_alembic {
#include "gx_alembic.cc"    // dsp class generated by faust -> dsp2cc
#ifndef __SSE__
#include "noiser.cc"
#endif

////////////////////////////// PLUG-IN CLASS ///////////////////////////

class Gx_alembic
{
private:
  // internal stuff
  float*                       output;
  float*                       input;
  PluginLV2*                   alembic_mono;
#ifndef __SSE__
  PluginLV2*                   wn;
#endif

  inline void run_dsp_mono(uint32_t n_samples);
  inline void connect_mono(uint32_t port,void* data);
  inline void init_dsp_mono(uint32_t rate);
  inline void connect_all_mono_ports(uint32_t port, void* data);
  inline void activate_f();
  inline void deactivate_f();
  inline void clean_up();
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
  Gx_alembic();
  ~Gx_alembic();
};

// constructor
Gx_alembic::Gx_alembic() :
  output(NULL),
  input(NULL),
  alembic_mono(gx_alembic::plugin()) {};

// destructor
Gx_alembic::~Gx_alembic()
{
  // just to be sure the plug have given free the allocated mem
  // it didn't hurd if the mem is already given free by clean_up()
  if (alembic_mono->activate_plugin !=0)
    alembic_mono->activate_plugin(false, alembic_mono);
  // delete DSP class
  alembic_mono->delete_instance(alembic_mono);
};

////////////////////////////// PRIVATE CLASS  FUNCTIONS ////////////////

void Gx_alembic::init_dsp_mono(uint32_t rate)
{
  AVOIDDENORMALS(); // init the SSE denormal protection
#ifndef __SSE__
  wn = noiser::plugin();
  wn->set_samplerate(rate, wn);
#endif
  alembic_mono->set_samplerate(rate, alembic_mono); // init the DSP class
}

// connect the Ports used by the plug-in class
void Gx_alembic::connect_mono(uint32_t port,void* data)
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

void Gx_alembic::activate_f()
{
  // allocate the internal DSP mem
  if (alembic_mono->activate_plugin !=0)
    alembic_mono->activate_plugin(true, alembic_mono);
}

void Gx_alembic::clean_up()
{
#ifndef __SSE__
  wn->delete_instance(wn);;
#endif
  // delete the internal DSP mem
  if (alembic_mono->activate_plugin !=0)
    alembic_mono->activate_plugin(false, alembic_mono);
}

void Gx_alembic::deactivate_f()
{ 
  // delete the internal DSP mem
  if (alembic_mono->activate_plugin !=0)
    alembic_mono->activate_plugin(false, alembic_mono);
}

void Gx_alembic::run_dsp_mono(uint32_t n_samples)
{
  if (n_samples< 1) return;
#ifndef __SSE__
  wn->mono_audio(static_cast<int>(n_samples), input, input, wn);;
#endif
  alembic_mono->mono_audio(static_cast<int>(n_samples), input,
                        output, alembic_mono);
}

void Gx_alembic::connect_all_mono_ports(uint32_t port, void* data)
{
  // connect the Ports used by the plug-in class
  connect_mono(port,data); 
  // connect the Ports used by the DSP class
  alembic_mono->connect_ports(port,  data, alembic_mono);
}

///////////////////////// PRIVATE CLASS  FUNCTIONS /////////////////////

LV2_Handle
Gx_alembic::instantiate(const LV2_Descriptor*     descriptor,
            double                    rate,
            const char*               bundle_path,
            const LV2_Feature* const* features)
{
  // init the plug-in class
  Gx_alembic *self = new Gx_alembic();
  if (!self)
    {
      return NULL;
    }

  self->init_dsp_mono((uint32_t)rate);

  return (LV2_Handle)self;
}

void Gx_alembic::connect_port(LV2_Handle instance,
                                uint32_t   port,
                                void*      data)
{
  // connect all ports
  static_cast<Gx_alembic*>(instance)->connect_all_mono_ports(port, data);
}

void Gx_alembic::activate(LV2_Handle instance)
{
  // allocate needed mem
  static_cast<Gx_alembic*>(instance)->activate_f();
}

void Gx_alembic::run(LV2_Handle instance, uint32_t n_samples)
{
  // run dsp
  static_cast<Gx_alembic*>(instance)->run_dsp_mono(n_samples);
}

void Gx_alembic::deactivate(LV2_Handle instance)
{
  // free allocated mem
  static_cast<Gx_alembic*>(instance)->deactivate_f();
}

void Gx_alembic::cleanup(LV2_Handle instance)
{
  // well, clean up after us
  Gx_alembic* self = static_cast<Gx_alembic*>(instance);
  self->clean_up();
  delete self;
}

const LV2_Descriptor Gx_alembic::descriptor =
{
  GXPLUGIN_URI "#alembic",
  instantiate,
  connect_port,
  activate,
  run,
  deactivate,
  cleanup,
  NULL
};

} //end namespace gx_alembic

///////////////////////////// LV2 DESCRIPTOR ///////////////////////////

LV2_SYMBOL_EXPORT
const LV2_Descriptor*
lv2_descriptor(uint32_t index)
{
  switch (index)
    {
    case 0:
      return &gx_alembic::Gx_alembic::descriptor;
    default:
      return NULL;
    }
}

///////////////////////////// FIN //////////////////////////////////////
