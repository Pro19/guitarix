// generated from file '../src/faust/plexiel34.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "math.h"
#include "plexipowerampel34_neg_table.h"
#include "plexipowerampel34_table.h"

namespace plexiel34 {

class Dsp: public PluginDef {
private:
	gx_resample::FixedRateResampler smp;
	int sample_rate;
	int fSampleRate;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst3;
	double fConst5;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec2[2];
	double fConst6;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fRec1[5];
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;

	void clear_state_f();
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static void init_static(unsigned int sample_rate, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "plexiel34";
	name = N_("Push Pull EL34");
	groups = 0;
	description = N_("PlexiEL34"); // description (tooltip)
	category = "";       // category
	shortname = N_("PlexiEL34");     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = 0;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec2[l1] = 0.0;
	for (int l2 = 0; (l2 < 5); l2 = (l2 + 1)) fRec1[l2] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int RsamplingFreq)
{
	sample_rate = 96000;
	smp.setup(RsamplingFreq, sample_rate);
	fSampleRate = sample_rate;
	double fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	double fConst1 = (1.8269373389389401e-19 * fConst0);
	double fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst1 + 2.7124352361658701e-16)) + 8.16290535602033e-14)) + 4.6414729817426102e-12)) + 4.0015810287500304e-12);
	fConst3 = (fConst0 / fConst2);
	double fConst4 = (3.87560926163844e-19 * fConst0);
	fConst5 = ((fConst0 * ((fConst0 * (fConst4 + 4.3080090312012499e-16)) + 3.1750970560917398e-17)) + 5.3495467261266997e-19);
	fConst6 = (1.0 / fConst2);
	double fConst7 = mydsp_faustpower2_f(fConst0);
	double fConst8 = (7.3077493557557401e-19 * fConst0);
	fConst9 = ((fConst0 * ((fConst7 * (-5.4248704723317303e-16 - fConst8)) + 9.2829459634852301e-12)) + 1.6006324115000099e-11);
	fConst10 = ((fConst7 * ((1.0961624033633601e-18 * fConst7) + -1.63258107120407e-13)) + 2.40094861725002e-11);
	fConst11 = ((fConst0 * ((fConst7 * (5.4248704723317303e-16 - fConst8)) + -9.2829459634852301e-12)) + 1.6006324115000099e-11);
	fConst12 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst1 + -2.7124352361658701e-16)) + 8.16290535602033e-14)) + -4.6414729817426102e-12)) + 4.0015810287500304e-12);
	double fConst13 = (1.5502437046553801e-18 * fConst0);
	fConst14 = ((fConst7 * (-8.6160180624025097e-16 - fConst13)) + 1.0699093452253399e-18);
	fConst15 = (fConst0 * ((2.32536555698307e-18 * fConst7) + -6.3501941121834698e-17));
	fConst16 = ((fConst7 * (8.6160180624025097e-16 - fConst13)) + -1.0699093452253399e-18);
	fConst17 = ((fConst0 * ((fConst0 * (fConst4 + -4.3080090312012499e-16)) + 3.1750970560917398e-17)) + -5.3495467261266997e-19);
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, input0, buf);
	double fSlow0 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider0))));
	double fSlow1 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider1))));
	for (int i0 = 0; (i0 < ReCount); i0 = (i0 + 1)) {
		fRec0[0] = (fSlow0 + (0.999 * fRec0[1]));
		fRec2[0] = (fSlow1 + (0.999 * fRec2[1]));
		fRec1[0] = ((double(buf[i0]) * fRec2[0]) - (fConst6 * ((((fConst9 * fRec1[1]) + (fConst10 * fRec1[2])) + (fConst11 * fRec1[3])) + (fConst12 * fRec1[4]))));
		double fTemp0 = (fConst3 * (((((fConst5 * fRec1[0]) + (fConst14 * fRec1[1])) + (fConst15 * fRec1[2])) + (fConst16 * fRec1[3])) + (fConst17 * fRec1[4])));
		double fThen0 = double(plexipowerampel34clip(double(fTemp0)));
		double fElse0 = double(plexipowerampel34_negclip(double(fTemp0)));
		buf[i0] = FAUSTFLOAT((fRec0[0] * (int(signbit(double(fTemp0))) ? fElse0 : fThen0)));
		fRec0[1] = fRec0[0];
		fRec2[1] = fRec2[0];
		for (int j0 = 4; (j0 > 0); j0 = (j0 - 1)) {
			fRec1[j0] = fRec1[(j0 - 1)];
		}
	}
	smp.down(buf, output0);
#undef fVslider0
#undef fVslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	fVslider0_ = reg.registerFloatVar("poweramp.Gain","","SA","",&fVslider0, 0.0, -30.0, 30.0, 0.10000000000000001, 0);
	fVslider1_ = reg.registerFloatVar("poweramp.Pregain","","SA","",&fVslider1, 0.0, -30.0, 30.0, 0.10000000000000001, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace plexiel34
