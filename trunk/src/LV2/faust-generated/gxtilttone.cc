// generated from file '../src/LV2/faust/gxtilttone.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "math.h"
#include "tiltdrivepro_in_neg_table.h"
#include "tiltdrivepro_in_table.h"
#include "tiltdrivepro_out_3_neg_table.h"
#include "tiltdrivepro_out_3_table.h"

namespace gxtilttone {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fVec0[2];
	double fConst18;
	double fConst19;
	double fRec8[2];
	double fConst20;
	double fConst21;
	double fRec7[3];
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fRec6[3];
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fRec5[3];
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fRec4[3];
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fRec3[3];
	double fConst54;
	double fConst55;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec9[2];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec10[2];
	double fConst56;
	double fConst57;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fRec11[2];
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fRec2[3];
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fRec1[3];
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fRec20[2];
	double fRec19[3];
	double fVec1[2];
	double fConst121;
	double fConst122;
	double fRec18[2];
	double fConst123;
	double fRec17[3];
	double fConst124;
	double fRec16[3];
	double fRec15[3];
	double fRec14[3];
	double fRec13[3];
	double fRec12[3];
	double fConst125;
	double fConst126;
	double fConst127;
	double fRec28[2];
	double fRec27[3];
	double fVec2[2];
	double fConst128;
	double fConst129;
	double fRec26[2];
	double fConst130;
	double fRec25[3];
	double fConst131;
	double fRec24[3];
	double fRec23[3];
	double fRec22[3];
	double fRec21[3];
	double fConst132;
	double fConst133;
	double fConst134;
	double fRec35[2];
	double fRec34[3];
	double fVec3[2];
	double fConst135;
	double fConst136;
	double fRec33[2];
	double fConst137;
	double fRec32[3];
	double fConst138;
	double fRec31[3];
	double fRec30[3];
	double fRec29[3];
	double fConst139;
	double fRec40[2];
	double fRec39[3];
	double fRec38[3];
	double fRec37[3];
	double fRec36[3];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "tiltdrive";
	name = N_("Tilt Tone Pro");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fVec0[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec8[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec7[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec6[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec5[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec4[l6] = 0.0;
	for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) fRec3[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec9[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec10[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec11[l10] = 0.0;
	for (int l11 = 0; (l11 < 3); l11 = (l11 + 1)) fRec2[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec1[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec20[l13] = 0.0;
	for (int l14 = 0; (l14 < 3); l14 = (l14 + 1)) fRec19[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fVec1[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fRec18[l16] = 0.0;
	for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) fRec17[l17] = 0.0;
	for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) fRec16[l18] = 0.0;
	for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) fRec15[l19] = 0.0;
	for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) fRec14[l20] = 0.0;
	for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) fRec13[l21] = 0.0;
	for (int l22 = 0; (l22 < 3); l22 = (l22 + 1)) fRec12[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec28[l23] = 0.0;
	for (int l24 = 0; (l24 < 3); l24 = (l24 + 1)) fRec27[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fVec2[l25] = 0.0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec26[l26] = 0.0;
	for (int l27 = 0; (l27 < 3); l27 = (l27 + 1)) fRec25[l27] = 0.0;
	for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) fRec24[l28] = 0.0;
	for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) fRec23[l29] = 0.0;
	for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) fRec22[l30] = 0.0;
	for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) fRec21[l31] = 0.0;
	for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) fRec35[l32] = 0.0;
	for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) fRec34[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fVec3[l34] = 0.0;
	for (int l35 = 0; (l35 < 2); l35 = (l35 + 1)) fRec33[l35] = 0.0;
	for (int l36 = 0; (l36 < 3); l36 = (l36 + 1)) fRec32[l36] = 0.0;
	for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) fRec31[l37] = 0.0;
	for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) fRec30[l38] = 0.0;
	for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) fRec29[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec40[l40] = 0.0;
	for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) fRec39[l41] = 0.0;
	for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) fRec38[l42] = 0.0;
	for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) fRec37[l43] = 0.0;
	for (int l44 = 0; (l44 < 3); l44 = (l44 + 1)) fRec36[l44] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = (4.3359846965600902e-10 * fConst0);
	fConst2 = (((fConst1 + 2.06017394709431e-08) * fConst0) + 2.4241795007721197e-07);
	fConst3 = (fConst0 / fConst2);
	fConst4 = (5.1188558022836097e-09 * fConst0);
	fConst5 = (-6.8251410697115407e-08 - fConst4);
	fConst6 = (4.3087078246641999e-10 * fConst0);
	fConst7 = (((fConst6 + 1.5147269359528599e-07) * fConst0) + 3.0279047940886298e-06);
	fConst8 = (fConst0 / fConst7);
	fConst9 = (2.5252985104703301e-08 * fConst0);
	fConst10 = (-4.20883085078388e-06 - fConst9);
	fConst11 = std::tan((20517.741620594938 / fConst0));
	fConst12 = (1.0 / fConst11);
	fConst13 = (1.0 / (((fConst12 + 1.0000000000000004) / fConst11) + 1.0));
	fConst14 = mydsp_faustpower2_f(fConst11);
	fConst15 = (1.0 / fConst14);
	fConst16 = (fConst12 + 1.0);
	fConst17 = (0.0 - (1.0 / (fConst16 * fConst11)));
	fConst18 = (1.0 / fConst16);
	fConst19 = (1.0 - fConst12);
	fConst20 = (((fConst12 + -1.0000000000000004) / fConst11) + 1.0);
	fConst21 = (2.0 * (1.0 - fConst15));
	fConst22 = (0.0 - (2.0 / fConst14));
	fConst23 = std::tan((3769.9111843077517 / fConst0));
	fConst24 = (1.0 / fConst23);
	fConst25 = (fConst24 + 1.0);
	fConst26 = (1.0 / ((fConst25 / fConst23) + 1.0));
	fConst27 = (1.0 - fConst24);
	fConst28 = (1.0 - (fConst27 / fConst23));
	fConst29 = mydsp_faustpower2_f(fConst23);
	fConst30 = (1.0 / fConst29);
	fConst31 = (2.0 * (1.0 - fConst30));
	fConst32 = std::tan((659.73445725385659 / fConst0));
	fConst33 = (1.0 / fConst32);
	fConst34 = (fConst33 + 1.0);
	fConst35 = (1.0 / ((fConst34 / fConst32) + 1.0));
	fConst36 = (1.0 - fConst33);
	fConst37 = (1.0 - (fConst36 / fConst32));
	fConst38 = mydsp_faustpower2_f(fConst32);
	fConst39 = (1.0 / fConst38);
	fConst40 = (2.0 * (1.0 - fConst39));
	fConst41 = std::tan((270.1769682087222 / fConst0));
	fConst42 = (1.0 / fConst41);
	fConst43 = (fConst42 + 1.0);
	fConst44 = (1.0 / ((fConst43 / fConst41) + 1.0));
	fConst45 = (1.0 - fConst42);
	fConst46 = (1.0 - (fConst45 / fConst41));
	fConst47 = mydsp_faustpower2_f(fConst41);
	fConst48 = (1.0 / fConst47);
	fConst49 = (2.0 * (1.0 - fConst48));
	fConst50 = (1.0 / fConst7);
	fConst51 = mydsp_faustpower2_f(fConst0);
	fConst52 = (6.0558095881772596e-06 - (8.6174156493283997e-10 * fConst51));
	fConst53 = (((fConst6 + -1.5147269359528599e-07) * fConst0) + 3.0279047940886298e-06);
	fConst54 = (5.0505970209406502e-08 * fConst0);
	fConst55 = (4.20883085078388e-06 - fConst9);
	fConst56 = (9.3479989349062406e-10 * fConst51);
	fConst57 = (fConst56 + -8.8397153048758794e-05);
	fConst58 = ((2.3369997337265602e-10 * fConst51) + -2.2099288262189698e-05);
	fConst59 = (1.2339358594076199e-10 * fConst51);
	fConst60 = (fConst59 + -0.0025575064320066902);
	fConst61 = (3.0848396485190601e-11 * fConst51);
	fConst62 = (fConst61 + 0.00019155663065666001);
	fConst63 = (6.1696792970381203e-11 * fConst51);
	fConst64 = (0.000220992882621897 - fConst61);
	fConst65 = (6.1696792970381203e-11 * fConst0);
	fConst66 = ((fConst65 + -7.9857634475636497e-07) * fConst0);
	fConst67 = (4.6739994674531203e-10 * fConst0);
	fConst68 = ((fConst67 + -1.3286092103228401e-06) * fConst0);
	fConst69 = ((fConst67 + -8.6120926357753199e-07) * fConst0);
	fConst70 = (((1.0170092458259699e-06 - fConst67) * fConst0) + -4.4198576524379397e-05);
	fConst71 = (1.1684998668632801e-10 * fConst0);
	fConst72 = (((-5.73476530403822e-08 - fConst71) * fConst0) + -1.10496441310948e-05);
	fConst73 = (2.3369997337265602e-10 * fConst0);
	fConst74 = (fConst73 + 1.14695306080764e-07);
	fConst75 = (1.65744661966423e-07 - fConst73);
	fConst76 = (fConst71 + -8.2872330983211303e-08);
	fConst77 = ((fConst65 + -7.3687955178598403e-07) * fConst0);
	fConst78 = (((7.5744514944277697e-07 - fConst65) * fConst0) + -0.0012787532160033401);
	fConst79 = (3.0848396485190601e-11 * fConst0);
	fConst80 = ((fConst79 + -2.9646018409421402e-07) * fConst0);
	fConst81 = (1.5424198242595301e-11 * fConst0);
	fConst82 = (((1.4823009204710701e-07 - fConst81) * fConst0) + 9.5778315328330101e-05);
	fConst83 = ((3.3347825987644201e-07 - fConst79) * fConst0);
	fConst84 = (((fConst81 + -1.6673912993822101e-07) * fConst0) + 0.000110496441310948);
	fConst85 = ((fConst65 + 7.9857634475636497e-07) * fConst0);
	fConst86 = ((fConst67 + 1.3286092103228401e-06) * fConst0);
	fConst87 = ((fConst67 + 8.6120926357753199e-07) * fConst0);
	fConst88 = (((-1.0170092458259699e-06 - fConst67) * fConst0) + -4.4198576524379397e-05);
	fConst89 = (((5.73476530403822e-08 - fConst71) * fConst0) + -1.10496441310948e-05);
	fConst90 = (fConst73 + -1.14695306080764e-07);
	fConst91 = (-1.65744661966423e-07 - fConst73);
	fConst92 = (fConst71 + 8.2872330983211303e-08);
	fConst93 = ((fConst65 + 7.3687955178598403e-07) * fConst0);
	fConst94 = (((-7.5744514944277697e-07 - fConst65) * fConst0) + -0.0012787532160033401);
	fConst95 = ((fConst79 + 2.9646018409421402e-07) * fConst0);
	fConst96 = (((-1.4823009204710701e-07 - fConst81) * fConst0) + 9.5778315328330101e-05);
	fConst97 = ((-3.3347825987644201e-07 - fConst79) * fConst0);
	fConst98 = (((fConst81 + 1.6673912993822101e-07) * fConst0) + 0.000110496441310948);
	fConst99 = (1.26018981386311e-07 * fConst0);
	fConst100 = (9.5468925292659509e-07 * fConst0);
	fConst101 = (-4.4198576524379498e-05 - fConst100);
	fConst102 = (fConst67 + -7.3896580193635198e-22);
	fConst103 = (7.3896580193635198e-22 - fConst67);
	fConst104 = (-0.00044781997734501299 - fConst99);
	fConst105 = ((fConst65 + -9.7543485855598394e-23) * fConst0);
	fConst106 = (((9.7543485855598394e-23 - fConst65) * fConst0) + 0.00044198576524379503);
	fConst107 = (fConst59 + 0.00088397153048758897);
	fConst108 = (fConst100 + -4.4198576524379498e-05);
	fConst109 = (fConst67 + 7.3896580193635198e-22);
	fConst110 = (-7.3896580193635198e-22 - fConst67);
	fConst111 = (fConst99 + -0.00044781997734501299);
	fConst112 = ((fConst65 + 9.7543485855598394e-23) * fConst0);
	fConst113 = (((-9.7543485855598394e-23 - fConst65) * fConst0) + 0.00044198576524379503);
	fConst114 = (1.0 / fConst2);
	fConst115 = (4.84835900154423e-07 - (8.6719693931201804e-10 * fConst51));
	fConst116 = (((fConst1 + -2.06017394709431e-08) * fConst0) + 2.4241795007721197e-07);
	fConst117 = (1.0237711604567199e-08 * fConst0);
	fConst118 = (6.8251410697115407e-08 - fConst4);
	fConst119 = (1.0 / (((fConst24 + 1.0000000000000004) / fConst23) + 1.0));
	fConst120 = (1.0 / (fConst23 * fConst25));
	fConst121 = (0.0 - fConst120);
	fConst122 = (fConst27 / fConst25);
	fConst123 = (((fConst24 + -1.0000000000000004) / fConst23) + 1.0);
	fConst124 = (0.0 - (2.0 / fConst29));
	fConst125 = (1.0 / (((fConst33 + 1.0000000000000004) / fConst32) + 1.0));
	fConst126 = (1.0 / (fConst32 * fConst34));
	fConst127 = (1.0 / fConst25);
	fConst128 = (0.0 - fConst126);
	fConst129 = (fConst36 / fConst34);
	fConst130 = (((fConst33 + -1.0000000000000004) / fConst32) + 1.0);
	fConst131 = (0.0 - (2.0 / fConst38));
	fConst132 = (1.0 / (((fConst42 + 1.0000000000000004) / fConst41) + 1.0));
	fConst133 = (1.0 / (fConst41 * fConst43));
	fConst134 = (1.0 / fConst34);
	fConst135 = (0.0 - fConst133);
	fConst136 = (fConst45 / fConst43);
	fConst137 = (((fConst42 + -1.0000000000000004) / fConst41) + 1.0);
	fConst138 = (0.0 - (2.0 / fConst47));
	fConst139 = (1.0 / fConst43);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.0070000000000000062 * double(fVslider1));
	double fSlow2 = (0.004073836948085289 * (std::exp((1.0 - double(fVslider2))) + -1.0));
	double fSlow3 = (0.004073836948085289 * (std::exp(double(fVslider3)) + -1.0));
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec0[0] = (fSlow0 + (0.99299999999999999 * fRec0[1]));
		double fTemp0 = double(input0[i]);
		fVec0[0] = fTemp0;
		fRec8[0] = ((fConst17 * fVec0[1]) - (fConst18 * ((fConst19 * fRec8[1]) - (fConst12 * fTemp0))));
		fRec7[0] = (fRec8[0] - (fConst13 * ((fConst20 * fRec7[2]) + (fConst21 * fRec7[1]))));
		double fTemp1 = (fConst31 * fRec6[1]);
		fRec6[0] = ((fConst13 * (((fConst15 * fRec7[0]) + (fConst22 * fRec7[1])) + (fConst15 * fRec7[2]))) - (fConst26 * ((fConst28 * fRec6[2]) + fTemp1)));
		double fTemp2 = (fConst40 * fRec5[1]);
		fRec5[0] = ((fRec6[2] + (fConst26 * (fTemp1 + (fConst28 * fRec6[0])))) - (fConst35 * ((fConst37 * fRec5[2]) + fTemp2)));
		double fTemp3 = (fConst49 * fRec4[1]);
		fRec4[0] = ((fRec5[2] + (fConst35 * (fTemp2 + (fConst37 * fRec5[0])))) - (fConst44 * ((fConst46 * fRec4[2]) + fTemp3)));
		fRec3[0] = ((fRec4[2] + (fConst44 * (fTemp3 + (fConst46 * fRec4[0])))) - (fConst50 * ((fConst52 * fRec3[1]) + (fConst53 * fRec3[2]))));
		double fTemp4 = (fConst8 * (((fConst10 * fRec3[0]) + (fConst54 * fRec3[1])) + (fConst55 * fRec3[2])));
		fRec9[0] = (fSlow1 + (0.99299999999999999 * fRec9[1]));
		fRec10[0] = (fSlow2 + (0.99299999999999999 * fRec10[1]));
		fRec11[0] = (fSlow3 + (0.99299999999999999 * fRec11[1]));
		double fTemp5 = (((((fRec9[0] * ((((fRec10[0] * (((fConst57 * fRec10[0]) + 4.68504911158421e-05) - fConst56)) + (fRec11[0] * (((fConst58 * fRec10[0]) + (fConst51 * ((fRec11[0] * ((0.0 - (2.3369997337265602e-10 * fRec10[0])) + 4.6739994674531203e-10)) + -4.6739994674531203e-10))) + 4.4198576524379397e-05))) + 0.00017149047691459199) - fConst56)) + (fRec10[0] * (((fConst60 * fRec10[0]) + 0.0021365556533023801) - fConst59))) + (fRec11[0] * ((((fConst62 * fRec10[0]) + (fRec11[0] * (fConst63 + ((fConst64 * fRec10[0]) + -0.000441985765243794)))) + -0.00038311326131332002) - fConst63))) + 0.0033994079894153098) - fConst59);
		double fTemp6 = (fConst66 + ((((fRec9[0] * (fConst68 + (((fRec10[0] * (fConst69 + ((fConst70 * fRec10[0]) + 2.3425245557921101e-05))) + (fRec11[0] * (((fConst72 * fRec10[0]) + (fConst0 * (fConst74 + (fRec11[0] * (fConst75 + (fConst76 * fRec10[0])))))) + 2.2099288262189698e-05))) + 8.5745238457295996e-05))) + (fRec10[0] * (fConst77 + ((fConst78 * fRec10[0]) + 0.0010682778266511901)))) + (fRec11[0] * (fConst80 + (((fConst82 * fRec10[0]) + (fRec11[0] * (fConst83 + ((fConst84 * fRec10[0]) + -0.000220992882621897)))) + -0.00019155663065666001)))) + 0.0016997039947076601));
		double fTemp7 = (fConst85 + ((((fRec9[0] * (fConst86 + (((fRec10[0] * (fConst87 + ((fConst88 * fRec10[0]) + 2.3425245557921101e-05))) + (fRec11[0] * (((fConst89 * fRec10[0]) + (fConst0 * (fConst90 + (fRec11[0] * (fConst91 + (fConst92 * fRec10[0])))))) + 2.2099288262189698e-05))) + 8.5745238457295996e-05))) + (fRec10[0] * (fConst93 + ((fConst94 * fRec10[0]) + 0.0010682778266511901)))) + (fRec11[0] * (fConst95 + (((fConst96 * fRec10[0]) + (fRec11[0] * (fConst97 + ((fConst98 * fRec10[0]) + -0.000220992882621897)))) + -0.00019155663065666001)))) + 0.0016997039947076601));
		fRec2[0] = ((int(signbit(double(fTemp4)))?double(tiltdrivepro_in_negclip(double(fTemp4))):double(tiltdrivepro_inclip(double(fTemp4)))) - (((fRec2[1] * fTemp5) + (fRec2[2] * fTemp6)) / fTemp7));
		double fTemp8 = (fConst99 + ((((fRec9[0] * (((fConst101 * fRec10[0]) + (fConst0 * ((fRec11[0] * (fConst102 + (fConst103 * fRec10[0]))) + 9.5468925292659509e-07))) + 4.4198576524379498e-05)) + (fConst104 * fRec10[0])) + (fRec11[0] * (fConst105 + ((fConst106 * fRec10[0]) + -0.00044198576524379503)))) + 0.00044781997734501299));
		double fTemp9 = (1.0 - fRec10[0]);
		double fTemp10 = ((fRec11[0] * (((fConst107 * fRec10[0]) + -0.00088397153048758897) - fConst59)) + ((fRec9[0] * ((fRec11[0] * (0.0 - (fConst56 * fTemp9))) + (8.8397153048758997e-05 * fTemp9))) + (0.00089563995469002598 * fTemp9)));
		double fTemp11 = (((((fRec9[0] * (((fConst108 * fRec10[0]) + (fConst0 * ((fRec11[0] * (fConst109 + (fConst110 * fRec10[0]))) + -9.5468925292659509e-07))) + 4.4198576524379498e-05)) + (fConst111 * fRec10[0])) + (fRec11[0] * (fConst112 + ((fConst113 * fRec10[0]) + -0.00044198576524379503)))) + 0.00044781997734501299) - fConst99);
		fRec1[0] = (((((fRec2[0] * fTemp8) + (fRec2[1] * fTemp10)) + (fRec2[2] * fTemp11)) / fTemp7) - (fConst114 * ((fConst115 * fRec1[1]) + (fConst116 * fRec1[2]))));
		double fTemp12 = (fConst3 * (fRec0[0] * (((fConst5 * fRec1[0]) + (fConst117 * fRec1[1])) + (fConst118 * fRec1[2]))));
		fRec20[0] = (0.0 - (fConst18 * ((fConst19 * fRec20[1]) - (fVec0[1] + fTemp0))));
		fRec19[0] = (fRec20[0] - (fConst13 * ((fConst20 * fRec19[2]) + (fConst21 * fRec19[1]))));
		double fTemp13 = (fRec19[2] + (fRec19[0] + (2.0 * fRec19[1])));
		fVec1[0] = fTemp13;
		fRec18[0] = ((fConst13 * ((fConst120 * fTemp13) + (fConst121 * fVec1[1]))) - (fConst122 * fRec18[1]));
		fRec17[0] = (fRec18[0] - (fConst119 * ((fConst123 * fRec17[2]) + (fConst31 * fRec17[1]))));
		double fTemp14 = (fConst40 * fRec16[1]);
		fRec16[0] = ((fConst119 * (((fConst30 * fRec17[0]) + (fConst124 * fRec17[1])) + (fConst30 * fRec17[2]))) - (fConst35 * ((fConst37 * fRec16[2]) + fTemp14)));
		double fTemp15 = (fConst49 * fRec15[1]);
		fRec15[0] = ((fRec16[2] + (fConst35 * (fTemp14 + (fConst37 * fRec16[0])))) - (fConst44 * ((fConst46 * fRec15[2]) + fTemp15)));
		fRec14[0] = ((fRec15[2] + (fConst44 * (fTemp15 + (fConst46 * fRec15[0])))) - (fConst50 * ((fConst52 * fRec14[1]) + (fConst53 * fRec14[2]))));
		double fTemp16 = (fConst8 * (((fConst10 * fRec14[0]) + (fConst54 * fRec14[1])) + (fConst55 * fRec14[2])));
		fRec13[0] = ((int(signbit(double(fTemp16)))?double(tiltdrivepro_in_negclip(double(fTemp16))):double(tiltdrivepro_inclip(double(fTemp16)))) - (((fTemp5 * fRec13[1]) + (fTemp6 * fRec13[2])) / fTemp7));
		fRec12[0] = (((((fRec13[0] * fTemp8) + (fTemp10 * fRec13[1])) + (fTemp11 * fRec13[2])) / fTemp7) - (fConst114 * ((fConst115 * fRec12[1]) + (fConst116 * fRec12[2]))));
		double fTemp17 = (fConst3 * (fRec0[0] * (((fConst5 * fRec12[0]) + (fConst117 * fRec12[1])) + (fConst118 * fRec12[2]))));
		fRec28[0] = (0.0 - (fConst127 * ((fConst27 * fRec28[1]) - (fConst13 * (fTemp13 + fVec1[1])))));
		fRec27[0] = (fRec28[0] - (fConst119 * ((fConst123 * fRec27[2]) + (fConst31 * fRec27[1]))));
		double fTemp18 = (fRec27[2] + (fRec27[0] + (2.0 * fRec27[1])));
		fVec2[0] = fTemp18;
		fRec26[0] = ((fConst119 * ((fConst126 * fTemp18) + (fConst128 * fVec2[1]))) - (fConst129 * fRec26[1]));
		fRec25[0] = (fRec26[0] - (fConst125 * ((fConst130 * fRec25[2]) + (fConst40 * fRec25[1]))));
		double fTemp19 = (fConst49 * fRec24[1]);
		fRec24[0] = ((fConst125 * (((fConst39 * fRec25[0]) + (fConst131 * fRec25[1])) + (fConst39 * fRec25[2]))) - (fConst44 * ((fConst46 * fRec24[2]) + fTemp19)));
		fRec23[0] = ((fRec24[2] + (fConst44 * (fTemp19 + (fConst46 * fRec24[0])))) - (fConst50 * ((fConst52 * fRec23[1]) + (fConst53 * fRec23[2]))));
		double fTemp20 = (fConst8 * (((fConst10 * fRec23[0]) + (fConst54 * fRec23[1])) + (fConst55 * fRec23[2])));
		fRec22[0] = ((int(signbit(double(fTemp20)))?double(tiltdrivepro_in_negclip(double(fTemp20))):double(tiltdrivepro_inclip(double(fTemp20)))) - (((fTemp5 * fRec22[1]) + (fTemp6 * fRec22[2])) / fTemp7));
		fRec21[0] = (((((fRec22[0] * fTemp8) + (fTemp10 * fRec22[1])) + (fTemp11 * fRec22[2])) / fTemp7) - (fConst114 * ((fConst115 * fRec21[1]) + (fConst116 * fRec21[2]))));
		double fTemp21 = (fConst3 * (fRec0[0] * (((fConst5 * fRec21[0]) + (fConst117 * fRec21[1])) + (fConst118 * fRec21[2]))));
		fRec35[0] = (0.0 - (fConst134 * ((fConst36 * fRec35[1]) - (fConst119 * (fTemp18 + fVec2[1])))));
		fRec34[0] = (fRec35[0] - (fConst125 * ((fConst130 * fRec34[2]) + (fConst40 * fRec34[1]))));
		double fTemp22 = (fRec34[2] + (fRec34[0] + (2.0 * fRec34[1])));
		fVec3[0] = fTemp22;
		fRec33[0] = ((fConst125 * ((fConst133 * fTemp22) + (fConst135 * fVec3[1]))) - (fConst136 * fRec33[1]));
		fRec32[0] = (fRec33[0] - (fConst132 * ((fConst137 * fRec32[2]) + (fConst49 * fRec32[1]))));
		fRec31[0] = ((fConst132 * (((fConst48 * fRec32[0]) + (fConst138 * fRec32[1])) + (fConst48 * fRec32[2]))) - (fConst50 * ((fConst52 * fRec31[1]) + (fConst53 * fRec31[2]))));
		double fTemp23 = (fConst8 * (((fConst10 * fRec31[0]) + (fConst54 * fRec31[1])) + (fConst55 * fRec31[2])));
		fRec30[0] = ((int(signbit(double(fTemp23)))?double(tiltdrivepro_in_negclip(double(fTemp23))):double(tiltdrivepro_inclip(double(fTemp23)))) - (((fTemp5 * fRec30[1]) + (fTemp6 * fRec30[2])) / fTemp7));
		fRec29[0] = (((((fRec30[0] * fTemp8) + (fTemp10 * fRec30[1])) + (fTemp11 * fRec30[2])) / fTemp7) - (fConst114 * ((fConst115 * fRec29[1]) + (fConst116 * fRec29[2]))));
		double fTemp24 = (fConst3 * (fRec0[0] * (((fConst5 * fRec29[0]) + (fConst117 * fRec29[1])) + (fConst118 * fRec29[2]))));
		fRec40[0] = (0.0 - (fConst139 * ((fConst45 * fRec40[1]) - (fConst125 * (fTemp22 + fVec3[1])))));
		fRec39[0] = (fRec40[0] - (fConst132 * ((fConst137 * fRec39[2]) + (fConst49 * fRec39[1]))));
		fRec38[0] = ((fConst132 * (fRec39[2] + (fRec39[0] + (2.0 * fRec39[1])))) - (fConst50 * ((fConst52 * fRec38[1]) + (fConst53 * fRec38[2]))));
		double fTemp25 = (fConst8 * (((fConst10 * fRec38[0]) + (fConst54 * fRec38[1])) + (fConst55 * fRec38[2])));
		fRec37[0] = ((int(signbit(double(fTemp25)))?double(tiltdrivepro_in_negclip(double(fTemp25))):double(tiltdrivepro_inclip(double(fTemp25)))) - (((fTemp5 * fRec37[1]) + (fTemp6 * fRec37[2])) / fTemp7));
		fRec36[0] = (((((fRec37[0] * fTemp8) + (fTemp10 * fRec37[1])) + (fTemp11 * fRec37[2])) / fTemp7) - (fConst114 * ((fConst115 * fRec36[1]) + (fConst116 * fRec36[2]))));
		double fTemp26 = (fConst3 * (fRec0[0] * (((fConst5 * fRec36[0]) + (fConst117 * fRec36[1])) + (fConst118 * fRec36[2]))));
		output0[i] = FAUSTFLOAT((((((int(signbit(double(fTemp12)))?double(tiltdrivepro_out_3_negclip(double(fTemp12))):double(tiltdrivepro_out_3clip(double(fTemp12)))) + (int(signbit(double(fTemp17)))?double(tiltdrivepro_out_3_negclip(double(fTemp17))):double(tiltdrivepro_out_3clip(double(fTemp17))))) + (int(signbit(double(fTemp21)))?double(tiltdrivepro_out_3_negclip(double(fTemp21))):double(tiltdrivepro_out_3clip(double(fTemp21))))) + (int(signbit(double(fTemp24)))?double(tiltdrivepro_out_3_negclip(double(fTemp24))):double(tiltdrivepro_out_3clip(double(fTemp24))))) + (int(signbit(double(fTemp26)))?double(tiltdrivepro_out_3_negclip(double(fTemp26))):double(tiltdrivepro_out_3clip(double(fTemp26))))));
		fRec0[1] = fRec0[0];
		fVec0[1] = fVec0[0];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1];
		fRec4[1] = fRec4[0];
		fRec3[2] = fRec3[1];
		fRec3[1] = fRec3[0];
		fRec9[1] = fRec9[0];
		fRec10[1] = fRec10[0];
		fRec11[1] = fRec11[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fRec1[2] = fRec1[1];
		fRec1[1] = fRec1[0];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		fVec1[1] = fVec1[0];
		fRec18[1] = fRec18[0];
		fRec17[2] = fRec17[1];
		fRec17[1] = fRec17[0];
		fRec16[2] = fRec16[1];
		fRec16[1] = fRec16[0];
		fRec15[2] = fRec15[1];
		fRec15[1] = fRec15[0];
		fRec14[2] = fRec14[1];
		fRec14[1] = fRec14[0];
		fRec13[2] = fRec13[1];
		fRec13[1] = fRec13[0];
		fRec12[2] = fRec12[1];
		fRec12[1] = fRec12[0];
		fRec28[1] = fRec28[0];
		fRec27[2] = fRec27[1];
		fRec27[1] = fRec27[0];
		fVec2[1] = fVec2[0];
		fRec26[1] = fRec26[0];
		fRec25[2] = fRec25[1];
		fRec25[1] = fRec25[0];
		fRec24[2] = fRec24[1];
		fRec24[1] = fRec24[0];
		fRec23[2] = fRec23[1];
		fRec23[1] = fRec23[0];
		fRec22[2] = fRec22[1];
		fRec22[1] = fRec22[0];
		fRec21[2] = fRec21[1];
		fRec21[1] = fRec21[0];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fVec3[1] = fVec3[0];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fRec31[2] = fRec31[1];
		fRec31[1] = fRec31[0];
		fRec30[2] = fRec30[1];
		fRec30[1] = fRec30[0];
		fRec29[2] = fRec29[1];
		fRec29[1] = fRec29[0];
		fRec40[1] = fRec40[0];
		fRec39[2] = fRec39[1];
		fRec39[1] = fRec39[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fRec37[2] = fRec37[1];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
#undef fVslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BODY: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case DRIVE: 
		fVslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case LEVEL: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TONE: 
		fVslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BODY, 
   DRIVE, 
   LEVEL, 
   TONE, 
} PortIndex;
*/

} // end namespace gxtilttone
