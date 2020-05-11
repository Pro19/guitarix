// generated from file '../src/LV2/faust/gxtape.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "input12au7_neg_table.h"
#include "input12au7_table.h"
#include "math.h"
#include "output12au7_neg_table.h"
#include "output12au7_table.h"

namespace gxtape {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT	*fCheckbox0_;
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
	double fVec0[2];
	int iVec1[2];
	double fConst17;
	double fConst18;
	double fRec7[2];
	double fConst19;
	double fConst20;
	double fRec6[3];
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fRec5[3];
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fRec4[3];
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fRec3[3];
	double fConst49;
	double fRec2[2];
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec8[2];
	double fVec2[2];
	double fConst50;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fConst51;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec16[2];
	double fRec15[2];
	double fRec14[2];
	double fConst52;
	double fConst53;
	double fRec10[2];
	double fRec11[2];
	double fRec12[2];
	double fRec13[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT	*fVslider4_;
	double fRec23[2];
	double fRec22[2];
	double fRec21[2];
	double fRec17[2];
	double fRec18[2];
	double fRec19[2];
	double fRec20[2];
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT	*fVslider5_;
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT	*fCheckbox1_;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
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
	double fRec33[2];
	double fRec32[2];
	double fRec31[2];
	double fRec30[2];
	double fConst76;
	double fConst77;
	double fRec29[3];
	double fVec3[2];
	double fConst78;
	double fConst79;
	double fRec28[2];
	double fConst80;
	double fRec27[2];
	double fConst81;
	double fRec26[3];
	double fConst82;
	double fConst83;
	double fConst84;
	double fVec4[2];
	double fRec25[2];
	double fConst85;
	double fRec24[3];
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fRec35[2];
	double fConst91;
	double fConst92;
	double fRec34[3];
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fRec40[2];
	double fConst107;
	double fRec39[3];
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fRec41[2];
	double fRec38[3];
	double fConst114;
	double fRec37[3];
	double fConst115;
	double fRec36[3];
	double fConst116;
	double fConst117;
	double fRec45[3];
	double fRec46[2];
	double fRec44[3];
	double fConst118;
	double fConst119;
	double fRec43[3];
	double fConst120;
	double fRec42[3];
	double fConst121;
	double fConst122;
	double fConst123;
	FAUSTFLOAT fVslider6;
	FAUSTFLOAT	*fVslider6_;
	double fRec49[2];
	int iRec50[2];
	double fVec5[2];
	double fConst124;
	double fRec48[2];
	double fConst125;
	double fConst126;
	double fConst127;
	double fConst128;
	double fConst129;
	double fConst130;
	double fRec51[2];
	double fRec47[3];
	int IOTA;
	double *fVec6;
	double *fVec7;
	double fRec52[2];
	double fRec9[3];
	double fConst131;
	double fRec1[2];
	FAUSTFLOAT fVslider7;
	FAUSTFLOAT	*fVslider7_;
	double fRec53[2];
	double fConst132;
	double fConst133;
	double fRec0[3];
	double fConst134;
	double fConst135;
	double fRec62[2];
	double fRec61[3];
	double fVec8[2];
	double fConst136;
	double fConst137;
	double fRec60[2];
	double fConst138;
	double fRec59[3];
	double fConst139;
	double fRec58[3];
	double fRec57[3];
	double fRec56[2];
	double fVec9[2];
	double fRec73[2];
	double fRec72[2];
	double fRec71[2];
	double fRec70[2];
	double fRec69[3];
	double fVec10[2];
	double fRec68[2];
	double fRec67[2];
	double fRec66[3];
	double fVec11[2];
	double fRec65[2];
	double fRec64[3];
	double fRec75[2];
	double fRec74[3];
	double fRec80[2];
	double fRec79[3];
	double fRec81[2];
	double fRec78[3];
	double fRec77[3];
	double fRec76[3];
	double fRec85[3];
	double fRec86[2];
	double fRec84[3];
	double fRec83[3];
	double fRec82[3];
	double *fVec12;
	double *fVec13;
	double fRec87[2];
	double fRec63[3];
	double fRec55[2];
	double fRec54[3];
	double fConst140;
	double fConst141;
	double fConst142;
	double fRec95[2];
	double fRec94[3];
	double fVec14[2];
	double fConst143;
	double fConst144;
	double fRec93[2];
	double fConst145;
	double fRec92[3];
	double fConst146;
	double fRec91[3];
	double fRec90[2];
	double fVec15[2];
	double fRec106[2];
	double fRec105[2];
	double fRec104[2];
	double fRec103[2];
	double fRec102[3];
	double fVec16[2];
	double fRec101[2];
	double fRec100[2];
	double fRec99[3];
	double fVec17[2];
	double fRec98[2];
	double fRec97[3];
	double fRec108[2];
	double fRec107[3];
	double fRec113[2];
	double fRec112[3];
	double fRec114[2];
	double fRec111[3];
	double fRec110[3];
	double fRec109[3];
	double fRec118[3];
	double fRec119[2];
	double fRec117[3];
	double fRec116[3];
	double fRec115[3];
	double *fVec18;
	double *fVec19;
	double fRec120[2];
	double fRec96[3];
	double fRec89[2];
	double fRec88[3];
	double fConst147;
	double fConst148;
	double fConst149;
	double fRec127[2];
	double fRec126[3];
	double fVec20[2];
	double fConst150;
	double fConst151;
	double fRec125[2];
	double fConst152;
	double fRec124[3];
	double fConst153;
	double fRec123[2];
	double fVec21[2];
	double fRec138[2];
	double fRec137[2];
	double fRec136[2];
	double fRec135[2];
	double fRec134[3];
	double fVec22[2];
	double fRec133[2];
	double fRec132[2];
	double fRec131[3];
	double fVec23[2];
	double fRec130[2];
	double fRec129[3];
	double fRec140[2];
	double fRec139[3];
	double fRec145[2];
	double fRec144[3];
	double fRec146[2];
	double fRec143[3];
	double fRec142[3];
	double fRec141[3];
	double fRec150[3];
	double fRec151[2];
	double fRec149[3];
	double fRec148[3];
	double fRec147[3];
	double *fVec24;
	double *fVec25;
	double fRec152[2];
	double fRec128[3];
	double fRec122[2];
	double fRec121[3];
	double fConst154;
	double fRec157[2];
	double fRec156[3];
	double fRec155[2];
	double fVec26[2];
	double fRec168[2];
	double fRec167[2];
	double fRec166[2];
	double fRec165[2];
	double fRec164[3];
	double fVec27[2];
	double fRec163[2];
	double fRec162[2];
	double fRec161[3];
	double fVec28[2];
	double fRec160[2];
	double fRec159[3];
	double fRec170[2];
	double fRec169[3];
	double fRec175[2];
	double fRec174[3];
	double fRec176[2];
	double fRec173[3];
	double fRec172[3];
	double fRec171[3];
	double fRec180[3];
	double fRec181[2];
	double fRec179[3];
	double fRec178[3];
	double fRec177[3];
	double *fVec29;
	double *fVec30;
	double fRec182[2];
	double fRec158[3];
	double fRec154[2];
	double fRec153[3];

	bool mem_allocated;
	void mem_alloc();
	void mem_free();
	void connect(uint32_t port,void* data);
	void clear_state_f();
	int activate(bool start);
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static int activate_static(bool start, PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2(),
	  fVec6(0),
	  fVec7(0),
	  fVec12(0),
	  fVec13(0),
	  fVec18(0),
	  fVec19(0),
	  fVec24(0),
	  fVec25(0),
	  fVec29(0),
	  fVec30(0),
	  mem_allocated(false) {
	version = PLUGINLV2_VERSION;
	id = "gxtape";
	name = N_("gxtape");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = activate_static;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fVec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) iVec1[l1] = 0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec7[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec6[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec5[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec4[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec3[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fRec2[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec8[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fVec2[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec16[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec15[l11] = 0.0;
	for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) fRec14[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec10[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec11[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec12[l15] = 0.0;
	for (int l16 = 0; (l16 < 2); l16 = (l16 + 1)) fRec13[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fRec23[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec22[l18] = 0.0;
	for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) fRec21[l19] = 0.0;
	for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) fRec17[l20] = 0.0;
	for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) fRec18[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) fRec19[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec20[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec33[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec32[l25] = 0.0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec31[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fRec30[l27] = 0.0;
	for (int l28 = 0; (l28 < 3); l28 = (l28 + 1)) fRec29[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fVec3[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec28[l30] = 0.0;
	for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) fRec27[l31] = 0.0;
	for (int l32 = 0; (l32 < 3); l32 = (l32 + 1)) fRec26[l32] = 0.0;
	for (int l33 = 0; (l33 < 2); l33 = (l33 + 1)) fVec4[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fRec25[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec24[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fRec35[l36] = 0.0;
	for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) fRec34[l37] = 0.0;
	for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) fRec40[l38] = 0.0;
	for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) fRec39[l39] = 0.0;
	for (int l40 = 0; (l40 < 2); l40 = (l40 + 1)) fRec41[l40] = 0.0;
	for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) fRec38[l41] = 0.0;
	for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) fRec37[l42] = 0.0;
	for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) fRec36[l43] = 0.0;
	for (int l44 = 0; (l44 < 3); l44 = (l44 + 1)) fRec45[l44] = 0.0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) fRec46[l45] = 0.0;
	for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) fRec44[l46] = 0.0;
	for (int l47 = 0; (l47 < 3); l47 = (l47 + 1)) fRec43[l47] = 0.0;
	for (int l48 = 0; (l48 < 3); l48 = (l48 + 1)) fRec42[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fRec49[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) iRec50[l50] = 0;
	for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) fVec5[l51] = 0.0;
	for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) fRec48[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec51[l53] = 0.0;
	for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) fRec47[l54] = 0.0;
	for (int l55 = 0; (l55 < 8192); l55 = (l55 + 1)) fVec6[l55] = 0.0;
	for (int l56 = 0; (l56 < 8192); l56 = (l56 + 1)) fVec7[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec52[l57] = 0.0;
	for (int l58 = 0; (l58 < 3); l58 = (l58 + 1)) fRec9[l58] = 0.0;
	for (int l59 = 0; (l59 < 2); l59 = (l59 + 1)) fRec1[l59] = 0.0;
	for (int l60 = 0; (l60 < 2); l60 = (l60 + 1)) fRec53[l60] = 0.0;
	for (int l61 = 0; (l61 < 3); l61 = (l61 + 1)) fRec0[l61] = 0.0;
	for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) fRec62[l62] = 0.0;
	for (int l63 = 0; (l63 < 3); l63 = (l63 + 1)) fRec61[l63] = 0.0;
	for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) fVec8[l64] = 0.0;
	for (int l65 = 0; (l65 < 2); l65 = (l65 + 1)) fRec60[l65] = 0.0;
	for (int l66 = 0; (l66 < 3); l66 = (l66 + 1)) fRec59[l66] = 0.0;
	for (int l67 = 0; (l67 < 3); l67 = (l67 + 1)) fRec58[l67] = 0.0;
	for (int l68 = 0; (l68 < 3); l68 = (l68 + 1)) fRec57[l68] = 0.0;
	for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) fRec56[l69] = 0.0;
	for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) fVec9[l70] = 0.0;
	for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) fRec73[l71] = 0.0;
	for (int l72 = 0; (l72 < 2); l72 = (l72 + 1)) fRec72[l72] = 0.0;
	for (int l73 = 0; (l73 < 2); l73 = (l73 + 1)) fRec71[l73] = 0.0;
	for (int l74 = 0; (l74 < 2); l74 = (l74 + 1)) fRec70[l74] = 0.0;
	for (int l75 = 0; (l75 < 3); l75 = (l75 + 1)) fRec69[l75] = 0.0;
	for (int l76 = 0; (l76 < 2); l76 = (l76 + 1)) fVec10[l76] = 0.0;
	for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) fRec68[l77] = 0.0;
	for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) fRec67[l78] = 0.0;
	for (int l79 = 0; (l79 < 3); l79 = (l79 + 1)) fRec66[l79] = 0.0;
	for (int l80 = 0; (l80 < 2); l80 = (l80 + 1)) fVec11[l80] = 0.0;
	for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) fRec65[l81] = 0.0;
	for (int l82 = 0; (l82 < 3); l82 = (l82 + 1)) fRec64[l82] = 0.0;
	for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) fRec75[l83] = 0.0;
	for (int l84 = 0; (l84 < 3); l84 = (l84 + 1)) fRec74[l84] = 0.0;
	for (int l85 = 0; (l85 < 2); l85 = (l85 + 1)) fRec80[l85] = 0.0;
	for (int l86 = 0; (l86 < 3); l86 = (l86 + 1)) fRec79[l86] = 0.0;
	for (int l87 = 0; (l87 < 2); l87 = (l87 + 1)) fRec81[l87] = 0.0;
	for (int l88 = 0; (l88 < 3); l88 = (l88 + 1)) fRec78[l88] = 0.0;
	for (int l89 = 0; (l89 < 3); l89 = (l89 + 1)) fRec77[l89] = 0.0;
	for (int l90 = 0; (l90 < 3); l90 = (l90 + 1)) fRec76[l90] = 0.0;
	for (int l91 = 0; (l91 < 3); l91 = (l91 + 1)) fRec85[l91] = 0.0;
	for (int l92 = 0; (l92 < 2); l92 = (l92 + 1)) fRec86[l92] = 0.0;
	for (int l93 = 0; (l93 < 3); l93 = (l93 + 1)) fRec84[l93] = 0.0;
	for (int l94 = 0; (l94 < 3); l94 = (l94 + 1)) fRec83[l94] = 0.0;
	for (int l95 = 0; (l95 < 3); l95 = (l95 + 1)) fRec82[l95] = 0.0;
	for (int l96 = 0; (l96 < 8192); l96 = (l96 + 1)) fVec12[l96] = 0.0;
	for (int l97 = 0; (l97 < 8192); l97 = (l97 + 1)) fVec13[l97] = 0.0;
	for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) fRec87[l98] = 0.0;
	for (int l99 = 0; (l99 < 3); l99 = (l99 + 1)) fRec63[l99] = 0.0;
	for (int l100 = 0; (l100 < 2); l100 = (l100 + 1)) fRec55[l100] = 0.0;
	for (int l101 = 0; (l101 < 3); l101 = (l101 + 1)) fRec54[l101] = 0.0;
	for (int l102 = 0; (l102 < 2); l102 = (l102 + 1)) fRec95[l102] = 0.0;
	for (int l103 = 0; (l103 < 3); l103 = (l103 + 1)) fRec94[l103] = 0.0;
	for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) fVec14[l104] = 0.0;
	for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) fRec93[l105] = 0.0;
	for (int l106 = 0; (l106 < 3); l106 = (l106 + 1)) fRec92[l106] = 0.0;
	for (int l107 = 0; (l107 < 3); l107 = (l107 + 1)) fRec91[l107] = 0.0;
	for (int l108 = 0; (l108 < 2); l108 = (l108 + 1)) fRec90[l108] = 0.0;
	for (int l109 = 0; (l109 < 2); l109 = (l109 + 1)) fVec15[l109] = 0.0;
	for (int l110 = 0; (l110 < 2); l110 = (l110 + 1)) fRec106[l110] = 0.0;
	for (int l111 = 0; (l111 < 2); l111 = (l111 + 1)) fRec105[l111] = 0.0;
	for (int l112 = 0; (l112 < 2); l112 = (l112 + 1)) fRec104[l112] = 0.0;
	for (int l113 = 0; (l113 < 2); l113 = (l113 + 1)) fRec103[l113] = 0.0;
	for (int l114 = 0; (l114 < 3); l114 = (l114 + 1)) fRec102[l114] = 0.0;
	for (int l115 = 0; (l115 < 2); l115 = (l115 + 1)) fVec16[l115] = 0.0;
	for (int l116 = 0; (l116 < 2); l116 = (l116 + 1)) fRec101[l116] = 0.0;
	for (int l117 = 0; (l117 < 2); l117 = (l117 + 1)) fRec100[l117] = 0.0;
	for (int l118 = 0; (l118 < 3); l118 = (l118 + 1)) fRec99[l118] = 0.0;
	for (int l119 = 0; (l119 < 2); l119 = (l119 + 1)) fVec17[l119] = 0.0;
	for (int l120 = 0; (l120 < 2); l120 = (l120 + 1)) fRec98[l120] = 0.0;
	for (int l121 = 0; (l121 < 3); l121 = (l121 + 1)) fRec97[l121] = 0.0;
	for (int l122 = 0; (l122 < 2); l122 = (l122 + 1)) fRec108[l122] = 0.0;
	for (int l123 = 0; (l123 < 3); l123 = (l123 + 1)) fRec107[l123] = 0.0;
	for (int l124 = 0; (l124 < 2); l124 = (l124 + 1)) fRec113[l124] = 0.0;
	for (int l125 = 0; (l125 < 3); l125 = (l125 + 1)) fRec112[l125] = 0.0;
	for (int l126 = 0; (l126 < 2); l126 = (l126 + 1)) fRec114[l126] = 0.0;
	for (int l127 = 0; (l127 < 3); l127 = (l127 + 1)) fRec111[l127] = 0.0;
	for (int l128 = 0; (l128 < 3); l128 = (l128 + 1)) fRec110[l128] = 0.0;
	for (int l129 = 0; (l129 < 3); l129 = (l129 + 1)) fRec109[l129] = 0.0;
	for (int l130 = 0; (l130 < 3); l130 = (l130 + 1)) fRec118[l130] = 0.0;
	for (int l131 = 0; (l131 < 2); l131 = (l131 + 1)) fRec119[l131] = 0.0;
	for (int l132 = 0; (l132 < 3); l132 = (l132 + 1)) fRec117[l132] = 0.0;
	for (int l133 = 0; (l133 < 3); l133 = (l133 + 1)) fRec116[l133] = 0.0;
	for (int l134 = 0; (l134 < 3); l134 = (l134 + 1)) fRec115[l134] = 0.0;
	for (int l135 = 0; (l135 < 8192); l135 = (l135 + 1)) fVec18[l135] = 0.0;
	for (int l136 = 0; (l136 < 8192); l136 = (l136 + 1)) fVec19[l136] = 0.0;
	for (int l137 = 0; (l137 < 2); l137 = (l137 + 1)) fRec120[l137] = 0.0;
	for (int l138 = 0; (l138 < 3); l138 = (l138 + 1)) fRec96[l138] = 0.0;
	for (int l139 = 0; (l139 < 2); l139 = (l139 + 1)) fRec89[l139] = 0.0;
	for (int l140 = 0; (l140 < 3); l140 = (l140 + 1)) fRec88[l140] = 0.0;
	for (int l141 = 0; (l141 < 2); l141 = (l141 + 1)) fRec127[l141] = 0.0;
	for (int l142 = 0; (l142 < 3); l142 = (l142 + 1)) fRec126[l142] = 0.0;
	for (int l143 = 0; (l143 < 2); l143 = (l143 + 1)) fVec20[l143] = 0.0;
	for (int l144 = 0; (l144 < 2); l144 = (l144 + 1)) fRec125[l144] = 0.0;
	for (int l145 = 0; (l145 < 3); l145 = (l145 + 1)) fRec124[l145] = 0.0;
	for (int l146 = 0; (l146 < 2); l146 = (l146 + 1)) fRec123[l146] = 0.0;
	for (int l147 = 0; (l147 < 2); l147 = (l147 + 1)) fVec21[l147] = 0.0;
	for (int l148 = 0; (l148 < 2); l148 = (l148 + 1)) fRec138[l148] = 0.0;
	for (int l149 = 0; (l149 < 2); l149 = (l149 + 1)) fRec137[l149] = 0.0;
	for (int l150 = 0; (l150 < 2); l150 = (l150 + 1)) fRec136[l150] = 0.0;
	for (int l151 = 0; (l151 < 2); l151 = (l151 + 1)) fRec135[l151] = 0.0;
	for (int l152 = 0; (l152 < 3); l152 = (l152 + 1)) fRec134[l152] = 0.0;
	for (int l153 = 0; (l153 < 2); l153 = (l153 + 1)) fVec22[l153] = 0.0;
	for (int l154 = 0; (l154 < 2); l154 = (l154 + 1)) fRec133[l154] = 0.0;
	for (int l155 = 0; (l155 < 2); l155 = (l155 + 1)) fRec132[l155] = 0.0;
	for (int l156 = 0; (l156 < 3); l156 = (l156 + 1)) fRec131[l156] = 0.0;
	for (int l157 = 0; (l157 < 2); l157 = (l157 + 1)) fVec23[l157] = 0.0;
	for (int l158 = 0; (l158 < 2); l158 = (l158 + 1)) fRec130[l158] = 0.0;
	for (int l159 = 0; (l159 < 3); l159 = (l159 + 1)) fRec129[l159] = 0.0;
	for (int l160 = 0; (l160 < 2); l160 = (l160 + 1)) fRec140[l160] = 0.0;
	for (int l161 = 0; (l161 < 3); l161 = (l161 + 1)) fRec139[l161] = 0.0;
	for (int l162 = 0; (l162 < 2); l162 = (l162 + 1)) fRec145[l162] = 0.0;
	for (int l163 = 0; (l163 < 3); l163 = (l163 + 1)) fRec144[l163] = 0.0;
	for (int l164 = 0; (l164 < 2); l164 = (l164 + 1)) fRec146[l164] = 0.0;
	for (int l165 = 0; (l165 < 3); l165 = (l165 + 1)) fRec143[l165] = 0.0;
	for (int l166 = 0; (l166 < 3); l166 = (l166 + 1)) fRec142[l166] = 0.0;
	for (int l167 = 0; (l167 < 3); l167 = (l167 + 1)) fRec141[l167] = 0.0;
	for (int l168 = 0; (l168 < 3); l168 = (l168 + 1)) fRec150[l168] = 0.0;
	for (int l169 = 0; (l169 < 2); l169 = (l169 + 1)) fRec151[l169] = 0.0;
	for (int l170 = 0; (l170 < 3); l170 = (l170 + 1)) fRec149[l170] = 0.0;
	for (int l171 = 0; (l171 < 3); l171 = (l171 + 1)) fRec148[l171] = 0.0;
	for (int l172 = 0; (l172 < 3); l172 = (l172 + 1)) fRec147[l172] = 0.0;
	for (int l173 = 0; (l173 < 8192); l173 = (l173 + 1)) fVec24[l173] = 0.0;
	for (int l174 = 0; (l174 < 8192); l174 = (l174 + 1)) fVec25[l174] = 0.0;
	for (int l175 = 0; (l175 < 2); l175 = (l175 + 1)) fRec152[l175] = 0.0;
	for (int l176 = 0; (l176 < 3); l176 = (l176 + 1)) fRec128[l176] = 0.0;
	for (int l177 = 0; (l177 < 2); l177 = (l177 + 1)) fRec122[l177] = 0.0;
	for (int l178 = 0; (l178 < 3); l178 = (l178 + 1)) fRec121[l178] = 0.0;
	for (int l179 = 0; (l179 < 2); l179 = (l179 + 1)) fRec157[l179] = 0.0;
	for (int l180 = 0; (l180 < 3); l180 = (l180 + 1)) fRec156[l180] = 0.0;
	for (int l181 = 0; (l181 < 2); l181 = (l181 + 1)) fRec155[l181] = 0.0;
	for (int l182 = 0; (l182 < 2); l182 = (l182 + 1)) fVec26[l182] = 0.0;
	for (int l183 = 0; (l183 < 2); l183 = (l183 + 1)) fRec168[l183] = 0.0;
	for (int l184 = 0; (l184 < 2); l184 = (l184 + 1)) fRec167[l184] = 0.0;
	for (int l185 = 0; (l185 < 2); l185 = (l185 + 1)) fRec166[l185] = 0.0;
	for (int l186 = 0; (l186 < 2); l186 = (l186 + 1)) fRec165[l186] = 0.0;
	for (int l187 = 0; (l187 < 3); l187 = (l187 + 1)) fRec164[l187] = 0.0;
	for (int l188 = 0; (l188 < 2); l188 = (l188 + 1)) fVec27[l188] = 0.0;
	for (int l189 = 0; (l189 < 2); l189 = (l189 + 1)) fRec163[l189] = 0.0;
	for (int l190 = 0; (l190 < 2); l190 = (l190 + 1)) fRec162[l190] = 0.0;
	for (int l191 = 0; (l191 < 3); l191 = (l191 + 1)) fRec161[l191] = 0.0;
	for (int l192 = 0; (l192 < 2); l192 = (l192 + 1)) fVec28[l192] = 0.0;
	for (int l193 = 0; (l193 < 2); l193 = (l193 + 1)) fRec160[l193] = 0.0;
	for (int l194 = 0; (l194 < 3); l194 = (l194 + 1)) fRec159[l194] = 0.0;
	for (int l195 = 0; (l195 < 2); l195 = (l195 + 1)) fRec170[l195] = 0.0;
	for (int l196 = 0; (l196 < 3); l196 = (l196 + 1)) fRec169[l196] = 0.0;
	for (int l197 = 0; (l197 < 2); l197 = (l197 + 1)) fRec175[l197] = 0.0;
	for (int l198 = 0; (l198 < 3); l198 = (l198 + 1)) fRec174[l198] = 0.0;
	for (int l199 = 0; (l199 < 2); l199 = (l199 + 1)) fRec176[l199] = 0.0;
	for (int l200 = 0; (l200 < 3); l200 = (l200 + 1)) fRec173[l200] = 0.0;
	for (int l201 = 0; (l201 < 3); l201 = (l201 + 1)) fRec172[l201] = 0.0;
	for (int l202 = 0; (l202 < 3); l202 = (l202 + 1)) fRec171[l202] = 0.0;
	for (int l203 = 0; (l203 < 3); l203 = (l203 + 1)) fRec180[l203] = 0.0;
	for (int l204 = 0; (l204 < 2); l204 = (l204 + 1)) fRec181[l204] = 0.0;
	for (int l205 = 0; (l205 < 3); l205 = (l205 + 1)) fRec179[l205] = 0.0;
	for (int l206 = 0; (l206 < 3); l206 = (l206 + 1)) fRec178[l206] = 0.0;
	for (int l207 = 0; (l207 < 3); l207 = (l207 + 1)) fRec177[l207] = 0.0;
	for (int l208 = 0; (l208 < 8192); l208 = (l208 + 1)) fVec29[l208] = 0.0;
	for (int l209 = 0; (l209 < 8192); l209 = (l209 + 1)) fVec30[l209] = 0.0;
	for (int l210 = 0; (l210 < 2); l210 = (l210 + 1)) fRec182[l210] = 0.0;
	for (int l211 = 0; (l211 < 3); l211 = (l211 + 1)) fRec158[l211] = 0.0;
	for (int l212 = 0; (l212 < 2); l212 = (l212 + 1)) fRec154[l212] = 0.0;
	for (int l213 = 0; (l213 < 3); l213 = (l213 + 1)) fRec153[l213] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = std::tan((62831.853071795864 / fConst0));
	fConst2 = (1.0 / fConst1);
	fConst3 = (1.0 / (((fConst2 + 1.4142135623730949) / fConst1) + 1.0));
	fConst4 = (2.0823746460098201e-05 * fConst0);
	fConst5 = (fConst4 + 0.00046016991528681701);
	fConst6 = (fConst0 / fConst5);
	fConst7 = (2.08237184654756e-05 * fConst0);
	fConst8 = (fConst7 + 0.00046151365716903602);
	fConst9 = (fConst0 / fConst8);
	fConst10 = std::tan((20517.741620594938 / fConst0));
	fConst11 = (1.0 / fConst10);
	fConst12 = (1.0 / (((fConst11 + 1.0000000000000004) / fConst10) + 1.0));
	fConst13 = mydsp_faustpower2_f(fConst10);
	fConst14 = (1.0 / fConst13);
	fConst15 = (fConst11 + 1.0);
	fConst16 = (0.0 - (1.0 / (fConst15 * fConst10)));
	fConst17 = (1.0 / fConst15);
	fConst18 = (1.0 - fConst11);
	fConst19 = (((fConst11 + -1.0000000000000004) / fConst10) + 1.0);
	fConst20 = (2.0 * (1.0 - fConst14));
	fConst21 = (0.0 - (2.0 / fConst13));
	fConst22 = std::tan((3769.9111843077517 / fConst0));
	fConst23 = (1.0 / fConst22);
	fConst24 = (fConst23 + 1.0);
	fConst25 = (1.0 / ((fConst24 / fConst22) + 1.0));
	fConst26 = (1.0 - fConst23);
	fConst27 = (1.0 - (fConst26 / fConst22));
	fConst28 = mydsp_faustpower2_f(fConst22);
	fConst29 = (1.0 / fConst28);
	fConst30 = (2.0 * (1.0 - fConst29));
	fConst31 = std::tan((659.73445725385659 / fConst0));
	fConst32 = (1.0 / fConst31);
	fConst33 = (fConst32 + 1.0);
	fConst34 = (1.0 / ((fConst33 / fConst31) + 1.0));
	fConst35 = (1.0 - fConst32);
	fConst36 = (1.0 - (fConst35 / fConst31));
	fConst37 = mydsp_faustpower2_f(fConst31);
	fConst38 = (1.0 / fConst37);
	fConst39 = (2.0 * (1.0 - fConst38));
	fConst40 = std::tan((270.1769682087222 / fConst0));
	fConst41 = (1.0 / fConst40);
	fConst42 = (fConst41 + 1.0);
	fConst43 = (1.0 / ((fConst42 / fConst40) + 1.0));
	fConst44 = (1.0 - fConst41);
	fConst45 = (1.0 - (fConst44 / fConst40));
	fConst46 = mydsp_faustpower2_f(fConst40);
	fConst47 = (1.0 / fConst46);
	fConst48 = (2.0 * (1.0 - fConst47));
	fConst49 = ((0.00046151365716903602 - fConst7) / fConst8);
	fConst50 = (0.0050000000000000001 * fConst0);
	fConst51 = (6.2831853071795862 / fConst0);
	fConst52 = (10.0 / fConst0);
	fConst53 = (0.0 - fConst52);
	fConst54 = std::tan((47123.889803846898 / fConst0));
	fConst55 = (1.0 / fConst54);
	fConst56 = (1.0 / (((fConst55 + 1.4142135623730949) / fConst54) + 1.0));
	fConst57 = std::tan((39269.908169872411 / fConst0));
	fConst58 = (1.0 / fConst57);
	fConst59 = (1.0 / (fConst58 + 1.0));
	fConst60 = (1.0 - fConst58);
	fConst61 = (std::sin((314.15926535897933 / fConst0)) * fConst0);
	fConst62 = (392.69908169872411 / fConst61);
	fConst63 = std::tan((157.07963267948966 / fConst0));
	fConst64 = (1.0 / fConst63);
	fConst65 = (1.0 / (((fConst62 + fConst64) / fConst63) + 1.0));
	fConst66 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst63))));
	fConst67 = std::tan((78.539816339744831 / fConst0));
	fConst68 = (1.0 / fConst67);
	fConst69 = (fConst68 + 1.0);
	fConst70 = (1.0 / (fConst69 * fConst67));
	fConst71 = (0.0 - fConst70);
	fConst72 = (1.0 / (((fConst55 + 1.0000000000000004) / fConst54) + 1.0));
	fConst73 = (1.0 / (fConst55 + 1.0));
	fConst74 = (1.0 - fConst55);
	fConst75 = (3.1415926535897931 / fConst0);
	fConst76 = (((fConst55 + -1.0000000000000004) / fConst54) + 1.0);
	fConst77 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst54))));
	fConst78 = (1.0 - fConst68);
	fConst79 = (fConst78 / fConst69);
	fConst80 = (1.0 / fConst69);
	fConst81 = (((fConst64 - fConst62) / fConst63) + 1.0);
	fConst82 = (554.7021966383262 / fConst61);
	fConst83 = (((fConst82 + fConst64) / fConst63) + 1.0);
	fConst84 = (((fConst64 - fConst82) / fConst63) + 1.0);
	fConst85 = (((fConst55 + -1.4142135623730949) / fConst54) + 1.0);
	fConst86 = (1.0 / (((fConst58 + 1.4142135623730949) / fConst57) + 1.0));
	fConst87 = std::tan((31415.926535897932 / fConst0));
	fConst88 = (1.0 / fConst87);
	fConst89 = (1.0 / (fConst88 + 1.0));
	fConst90 = (1.0 - fConst88);
	fConst91 = (((fConst58 + -1.4142135623730949) / fConst57) + 1.0);
	fConst92 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst57))));
	fConst93 = (1.0 / (((fConst55 + 0.76536686473017945) / fConst54) + 1.0));
	fConst94 = (1.0 / (((fConst55 + 1.8477590650225735) / fConst54) + 1.0));
	fConst95 = (std::sin((471.23889803846896 / fConst0)) * fConst0);
	fConst96 = (589.0486225480862 / fConst95);
	fConst97 = std::tan((235.61944901923448 / fConst0));
	fConst98 = (1.0 / fConst97);
	fConst99 = (1.0 / (((fConst96 + fConst98) / fConst97) + 1.0));
	fConst100 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst97))));
	fConst101 = std::tan((109.95574287564276 / fConst0));
	fConst102 = (1.0 / fConst101);
	fConst103 = (fConst102 + 1.0);
	fConst104 = (0.0 - (1.0 / (fConst103 * fConst101)));
	fConst105 = (1.0 / fConst103);
	fConst106 = (1.0 - fConst102);
	fConst107 = (((fConst98 - fConst96) / fConst97) + 1.0);
	fConst108 = (1175.3065182545242 / fConst95);
	fConst109 = (((fConst108 + fConst98) / fConst97) + 1.0);
	fConst110 = (((fConst98 - fConst108) / fConst97) + 1.0);
	fConst111 = (1.0 / std::tan((14284.821795872789 / fConst0)));
	fConst112 = (1.0 / (fConst111 + 1.0));
	fConst113 = (1.0 - fConst111);
	fConst114 = (((fConst55 + -1.8477590650225735) / fConst54) + 1.0);
	fConst115 = (((fConst55 + -0.76536686473017945) / fConst54) + 1.0);
	fConst116 = (1.0 / (((fConst88 + 0.76536686473017945) / fConst87) + 1.0));
	fConst117 = (1.0 / (((fConst88 + 1.8477590650225735) / fConst87) + 1.0));
	fConst118 = (((fConst88 + -1.8477590650225735) / fConst87) + 1.0);
	fConst119 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst87))));
	fConst120 = (((fConst88 + -0.76536686473017945) / fConst87) + 1.0);
	fConst121 = (23561.944901923449 / fConst0);
	fConst122 = (1.0 / std::tan((785.39816339744823 / fConst0)));
	fConst123 = (1.0 / (fConst122 + 1.0));
	fConst124 = (1.0 - fConst122);
	fConst125 = std::tan((9424.7779607693792 / fConst0));
	fConst126 = (1.0 / fConst125);
	fConst127 = (fConst126 + 1.0);
	fConst128 = (1.0 / (fConst127 * fConst125));
	fConst129 = (0.0 - fConst128);
	fConst130 = ((1.0 - fConst126) / fConst127);
	fConst131 = ((0.00046016991528681701 - fConst4) / fConst5);
	fConst132 = (((fConst2 + -1.4142135623730949) / fConst1) + 1.0);
	fConst133 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst1))));
	fConst134 = (1.0 / (((fConst23 + 1.0000000000000004) / fConst22) + 1.0));
	fConst135 = (1.0 / (fConst22 * fConst24));
	fConst136 = (0.0 - fConst135);
	fConst137 = (fConst26 / fConst24);
	fConst138 = (((fConst23 + -1.0000000000000004) / fConst22) + 1.0);
	fConst139 = (0.0 - (2.0 / fConst28));
	fConst140 = (1.0 / (((fConst32 + 1.0000000000000004) / fConst31) + 1.0));
	fConst141 = (1.0 / (fConst31 * fConst33));
	fConst142 = (1.0 / fConst24);
	fConst143 = (0.0 - fConst141);
	fConst144 = (fConst35 / fConst33);
	fConst145 = (((fConst32 + -1.0000000000000004) / fConst31) + 1.0);
	fConst146 = (0.0 - (2.0 / fConst37));
	fConst147 = (1.0 / (((fConst41 + 1.0000000000000004) / fConst40) + 1.0));
	fConst148 = (1.0 / (fConst40 * fConst42));
	fConst149 = (1.0 / fConst33);
	fConst150 = (0.0 - fConst148);
	fConst151 = (fConst44 / fConst42);
	fConst152 = (((fConst41 + -1.0000000000000004) / fConst40) + 1.0);
	fConst153 = (0.0 - (2.0 / fConst46));
	fConst154 = (1.0 / fConst42);
	IOTA = 0;
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void Dsp::mem_alloc()
{
	if (!fVec6) fVec6 = new double[8192];
	if (!fVec7) fVec7 = new double[8192];
	if (!fVec12) fVec12 = new double[8192];
	if (!fVec13) fVec13 = new double[8192];
	if (!fVec18) fVec18 = new double[8192];
	if (!fVec19) fVec19 = new double[8192];
	if (!fVec24) fVec24 = new double[8192];
	if (!fVec25) fVec25 = new double[8192];
	if (!fVec29) fVec29 = new double[8192];
	if (!fVec30) fVec30 = new double[8192];
	mem_allocated = true;
}

void Dsp::mem_free()
{
	mem_allocated = false;
	if (fVec6) { delete fVec6; fVec6 = 0; }
	if (fVec7) { delete fVec7; fVec7 = 0; }
	if (fVec12) { delete fVec12; fVec12 = 0; }
	if (fVec13) { delete fVec13; fVec13 = 0; }
	if (fVec18) { delete fVec18; fVec18 = 0; }
	if (fVec19) { delete fVec19; fVec19 = 0; }
	if (fVec24) { delete fVec24; fVec24 = 0; }
	if (fVec25) { delete fVec25; fVec25 = 0; }
	if (fVec29) { delete fVec29; fVec29 = 0; }
	if (fVec30) { delete fVec30; fVec30 = 0; }
}

int Dsp::activate(bool start)
{
	if (start) {
		if (!mem_allocated) {
			mem_alloc();
			clear_state_f();
		}
	} else if (mem_allocated) {
		mem_free();
	}
	return 0;
}

int Dsp::activate_static(bool start, PluginLV2 *p)
{
	return static_cast<Dsp*>(p)->activate(start);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fCheckbox0 (*fCheckbox0_)
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
#define fVslider4 (*fVslider4_)
#define fVslider5 (*fVslider5_)
#define fCheckbox1 (*fCheckbox1_)
#define fVslider6 (*fVslider6_)
#define fVslider7 (*fVslider7_)
	int iSlow0 = int(double(fCheckbox0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow2 = (fConst50 * double(fVslider1));
	double fSlow3 = (fConst51 * double(fVslider2));
	double fSlow4 = (fConst50 * double(fVslider3));
	double fSlow5 = (fConst51 * double(fVslider4));
	int iSlow6 = int(double(fVslider5));
	double fSlow7 = double(fCheckbox1);
	int iSlow8 = int(fSlow7);
	double fSlow9 = (1.0 / std::tan((fConst75 * double((iSlow8?2274:4547)))));
	double fSlow10 = (1.0 - fSlow9);
	double fSlow11 = (fSlow9 + 1.0);
	double fSlow12 = std::tan((fConst121 * (2.0 - fSlow7)));
	double fSlow13 = (1.0 / fSlow12);
	double fSlow14 = (1.0 / (((fSlow13 + 1.4142135623730949) / fSlow12) + 1.0));
	double fSlow15 = (4.7399999999994777e-06 * double(fVslider6));
	double fSlow16 = (((fSlow13 + -1.4142135623730949) / fSlow12) + 1.0);
	double fSlow17 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fSlow12))));
	double fSlow18 = (0.00036676987543879196 * (std::exp((3.0 * (1.0 - double(fVslider7)))) + -1.0));
	for (int i = 0; (i < count); i = (i + 1)) {
		double fTemp0 = double(input0[i]);
		fVec0[0] = fTemp0;
		iVec1[0] = 1;
		fRec7[0] = ((fConst16 * fVec0[1]) - (fConst17 * ((fConst18 * fRec7[1]) - (fConst11 * fTemp0))));
		fRec6[0] = (fRec7[0] - (fConst12 * ((fConst19 * fRec6[2]) + (fConst20 * fRec6[1]))));
		double fTemp1 = (fConst30 * fRec5[1]);
		fRec5[0] = ((fConst12 * (((fConst14 * fRec6[0]) + (fConst21 * fRec6[1])) + (fConst14 * fRec6[2]))) - (fConst25 * ((fConst27 * fRec5[2]) + fTemp1)));
		double fTemp2 = (fConst39 * fRec4[1]);
		fRec4[0] = ((fRec5[2] + (fConst25 * (fTemp1 + (fConst27 * fRec5[0])))) - (fConst34 * ((fConst36 * fRec4[2]) + fTemp2)));
		double fTemp3 = (fConst48 * fRec3[1]);
		fRec3[0] = ((fRec4[2] + (fConst34 * (fTemp2 + (fConst36 * fRec4[0])))) - (fConst43 * ((fConst45 * fRec3[2]) + fTemp3)));
		fRec2[0] = ((fRec3[2] + (fConst43 * (fTemp3 + (fConst45 * fRec3[0])))) - (fConst49 * fRec2[1]));
		fRec8[0] = (fSlow1 + (0.99299999999999999 * fRec8[1]));
		double fTemp4 = (0.0 - (0.00027518994799636398 * fRec8[0]));
		double fTemp5 = (fConst9 * ((fRec2[0] * fTemp4) + (0.00027518994799636398 * (fRec8[0] * fRec2[1]))));
		double fTemp6 = (int(signbit(double(fTemp5)))?double(input12au7_negclip(double(fTemp5))):double(input12au7clip(double(fTemp5))));
		fVec2[0] = fTemp6;
		fRec16[0] = (fRec16[1] + (fSlow3 * (0.0 - fRec14[1])));
		double fTemp7 = double((1 - iVec1[1]));
		fRec15[0] = ((fSlow3 * fRec16[0]) + (fTemp7 + fRec15[1]));
		fRec14[0] = fRec15[0];
		double fTemp8 = (fSlow2 * (std::max<double>(0.0, (0.5 * (fRec14[0] + 1.0))) + 1.0));
		double fTemp9 = ((fRec10[1] != 0.0)?(((fRec11[1] > 0.0) & (fRec11[1] < 1.0))?fRec10[1]:0.0):(((fRec11[1] == 0.0) & (fTemp8 != fRec12[1]))?fConst52:(((fRec11[1] == 1.0) & (fTemp8 != fRec13[1]))?fConst53:0.0)));
		fRec10[0] = fTemp9;
		fRec11[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec11[1] + fTemp9)));
		fRec12[0] = (((fRec11[1] >= 1.0) & (fRec13[1] != fTemp8))?fTemp8:fRec12[1]);
		fRec13[0] = (((fRec11[1] <= 0.0) & (fRec12[1] != fTemp8))?fTemp8:fRec13[1]);
		double fTemp10 = (1.0 - fRec11[0]);
		fRec23[0] = (fRec23[1] + (fSlow5 * (0.0 - fRec21[1])));
		fRec22[0] = ((fSlow5 * fRec23[0]) + (fTemp7 + fRec22[1]));
		fRec21[0] = fRec22[0];
		double fTemp11 = (fSlow4 * (std::max<double>(0.0, (0.5 * (fRec21[0] + 1.0))) + 1.0));
		double fTemp12 = ((fRec17[1] != 0.0)?(((fRec18[1] > 0.0) & (fRec18[1] < 1.0))?fRec17[1]:0.0):(((fRec18[1] == 0.0) & (fTemp11 != fRec19[1]))?fConst52:(((fRec18[1] == 1.0) & (fTemp11 != fRec20[1]))?fConst53:0.0)));
		fRec17[0] = fTemp12;
		fRec18[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec18[1] + fTemp12)));
		fRec19[0] = (((fRec18[1] >= 1.0) & (fRec20[1] != fTemp11))?fTemp11:fRec19[1]);
		fRec20[0] = (((fRec18[1] <= 0.0) & (fRec19[1] != fTemp11))?fTemp11:fRec20[1]);
		double fTemp13 = (1.0 - fRec18[0]);
		fRec33[0] = (0.0 - (((fRec33[1] * fSlow10) - (fTemp6 + fVec2[1])) / fSlow11));
		fRec32[0] = (fRec33[0] - (0.29999999999999999 * fRec32[1]));
		fRec31[0] = (((2.0 / (std::exp((0.0 - (5.0 * fRec32[0]))) + 1.0)) + (0.29999999999999999 * fRec31[1])) + -1.0);
		fRec30[0] = (0.0 - (fConst73 * ((fConst74 * fRec30[1]) - (fRec31[0] + fRec31[1]))));
		fRec29[0] = (fRec30[0] - (fConst72 * ((fConst76 * fRec29[2]) + (fConst77 * fRec29[1]))));
		double fTemp14 = (fRec29[2] + (fRec29[0] + (2.0 * fRec29[1])));
		fVec3[0] = fTemp14;
		fRec28[0] = ((fConst72 * ((fConst70 * fTemp14) + (fConst71 * fVec3[1]))) - (fConst79 * fRec28[1]));
		fRec27[0] = ((fConst71 * fRec28[1]) - (fConst80 * ((fConst78 * fRec27[1]) - (fConst68 * fRec28[0]))));
		double fTemp15 = (fConst66 * fRec26[1]);
		fRec26[0] = (fRec27[0] - (fConst65 * ((fConst81 * fRec26[2]) + fTemp15)));
		double fTemp16 = ((fTemp15 + (fConst83 * fRec26[0])) + (fConst84 * fRec26[2]));
		fVec4[0] = fTemp16;
		fRec25[0] = (0.0 - (fConst59 * ((fConst60 * fRec25[1]) - (fConst65 * (fTemp16 + fVec4[1])))));
		fRec24[0] = (fRec25[0] - (fConst56 * ((fConst85 * fRec24[2]) + (fConst77 * fRec24[1]))));
		fRec35[0] = (0.0 - (fConst89 * ((fConst90 * fRec35[1]) - (fRec27[0] + fRec27[1]))));
		fRec34[0] = (fRec35[0] - (fConst86 * ((fConst91 * fRec34[2]) + (fConst92 * fRec34[1]))));
		fRec40[0] = ((fConst104 * fRec28[1]) - (fConst105 * ((fConst106 * fRec40[1]) - (fConst102 * fRec28[0]))));
		double fTemp17 = (fConst100 * fRec39[1]);
		fRec39[0] = (fRec40[0] - (fConst99 * ((fConst107 * fRec39[2]) + fTemp17)));
		fRec41[0] = (0.0 - (fConst112 * ((fConst113 * fRec41[1]) - (fRec38[1] + fRec38[2]))));
		fRec38[0] = ((fConst99 * ((fTemp17 + (fConst109 * fRec39[0])) + (fConst110 * fRec39[2]))) - fRec41[0]);
		fRec37[0] = (fRec38[0] - (fConst94 * ((fConst114 * fRec37[2]) + (fConst77 * fRec37[1]))));
		fRec36[0] = ((fConst94 * (fRec37[2] + (fRec37[0] + (2.0 * fRec37[1])))) - (fConst93 * ((fConst115 * fRec36[2]) + (fConst77 * fRec36[1]))));
		double fTemp18 = (fConst100 * fRec45[1]);
		fRec45[0] = (fRec27[0] - (fConst99 * ((fConst107 * fRec45[2]) + fTemp18)));
		fRec46[0] = (0.0 - (fConst112 * ((fConst113 * fRec46[1]) - (fRec44[1] + fRec44[2]))));
		fRec44[0] = ((fConst99 * ((fTemp18 + (fConst109 * fRec45[0])) + (fConst110 * fRec45[2]))) - fRec46[0]);
		fRec43[0] = (fRec44[0] - (fConst117 * ((fConst118 * fRec43[2]) + (fConst119 * fRec43[1]))));
		fRec42[0] = ((fConst117 * (fRec43[2] + (fRec43[0] + (2.0 * fRec43[1])))) - (fConst116 * ((fConst120 * fRec42[2]) + (fConst119 * fRec42[1]))));
		fRec49[0] = (fSlow15 + (0.99990000000000001 * fRec49[1]));
		iRec50[0] = ((1103515245 * iRec50[1]) + 12345);
		double fTemp19 = (fRec49[0] * double(iRec50[0]));
		fVec5[0] = fTemp19;
		fRec48[0] = (fConst123 * ((4.6566128752457969e-10 * (fTemp19 + fVec5[1])) - (fConst124 * fRec48[1])));
		fRec51[0] = ((4.6566128752457969e-10 * ((fConst128 * fTemp19) + (fConst129 * fVec5[1]))) - (fConst130 * fRec51[1]));
		fRec47[0] = ((fRec48[0] + (0.20000000000000001 * fRec51[0])) - (fSlow14 * ((fSlow16 * fRec47[2]) + (fSlow17 * fRec47[1]))));
		double fTemp20 = (fSlow14 * (fRec47[2] + (fRec47[0] + (2.0 * fRec47[1]))));
		double fTemp21 = ((iSlow6?(iSlow8?(fConst116 * (fRec42[2] + (fRec42[0] + (2.0 * fRec42[1])))):(fConst93 * (fRec36[2] + (fRec36[0] + (2.0 * fRec36[1]))))):(iSlow8?(fConst86 * (fRec34[2] + (fRec34[0] + (2.0 * fRec34[1])))):(fConst56 * (fRec24[2] + (fRec24[0] + (2.0 * fRec24[1])))))) + fTemp20);
		fVec6[(IOTA & 8191)] = fTemp21;
		int iTemp22 = int(std::min<double>(4096.0, std::max<double>(0.0, fRec19[0])));
		int iTemp23 = int(std::min<double>(4096.0, std::max<double>(0.0, fRec20[0])));
		double fTemp24 = ((fTemp13 * fVec6[((IOTA - iTemp22) & 8191)]) + (fRec18[0] * fVec6[((IOTA - iTemp23) & 8191)]));
		fVec7[(IOTA & 8191)] = fTemp24;
		int iTemp25 = int(std::min<double>(4096.0, std::max<double>(0.0, fRec12[0])));
		int iTemp26 = int(std::min<double>(4096.0, std::max<double>(0.0, fRec13[0])));
		fRec52[0] = (0.0 - (((fSlow10 * fRec52[1]) - (fRec9[1] + fRec9[2])) / fSlow11));
		fRec9[0] = (((fTemp10 * fVec7[((IOTA - iTemp25) & 8191)]) + (fRec11[0] * fVec7[((IOTA - iTemp26) & 8191)])) - fRec52[0]);
		fRec1[0] = ((iSlow0?fRec9[0]:fTemp6) - (fConst131 * fRec1[1]));
		fRec53[0] = (fSlow18 + (0.99299999999999999 * fRec53[1]));
		double fTemp27 = ((0.0 - (0.00025707707823962699 * fRec53[0])) + 0.00025707707823962699);
		double fTemp28 = (fRec53[0] + -1.0);
		double fTemp29 = (fConst6 * ((fRec1[1] * fTemp27) + (0.00025707707823962699 * (fRec1[0] * fTemp28))));
		fRec0[0] = ((int(signbit(double(fTemp29)))?double(output12au7_negclip(double(fTemp29))):double(output12au7clip(double(fTemp29)))) - (fConst3 * ((fConst132 * fRec0[2]) + (fConst133 * fRec0[1]))));
		fRec62[0] = (0.0 - (fConst17 * ((fConst18 * fRec62[1]) - (fVec0[1] + fTemp0))));
		fRec61[0] = (fRec62[0] - (fConst12 * ((fConst19 * fRec61[2]) + (fConst20 * fRec61[1]))));
		double fTemp30 = (fRec61[2] + (fRec61[0] + (2.0 * fRec61[1])));
		fVec8[0] = fTemp30;
		fRec60[0] = ((fConst12 * ((fConst135 * fTemp30) + (fConst136 * fVec8[1]))) - (fConst137 * fRec60[1]));
		fRec59[0] = (fRec60[0] - (fConst134 * ((fConst138 * fRec59[2]) + (fConst30 * fRec59[1]))));
		double fTemp31 = (fConst39 * fRec58[1]);
		fRec58[0] = ((fConst134 * (((fConst29 * fRec59[0]) + (fConst139 * fRec59[1])) + (fConst29 * fRec59[2]))) - (fConst34 * ((fConst36 * fRec58[2]) + fTemp31)));
		double fTemp32 = (fConst48 * fRec57[1]);
		fRec57[0] = ((fRec58[2] + (fConst34 * (fTemp31 + (fConst36 * fRec58[0])))) - (fConst43 * ((fConst45 * fRec57[2]) + fTemp32)));
		fRec56[0] = ((fRec57[2] + (fConst43 * (fTemp32 + (fConst45 * fRec57[0])))) - (fConst49 * fRec56[1]));
		double fTemp33 = (fConst9 * ((fRec56[0] * fTemp4) + (0.00027518994799636398 * (fRec8[0] * fRec56[1]))));
		double fTemp34 = (int(signbit(double(fTemp33)))?double(input12au7_negclip(double(fTemp33))):double(input12au7clip(double(fTemp33))));
		fVec9[0] = fTemp34;
		fRec73[0] = (0.0 - (((fSlow10 * fRec73[1]) - (fTemp34 + fVec9[1])) / fSlow11));
		fRec72[0] = (fRec73[0] - (0.29999999999999999 * fRec72[1]));
		fRec71[0] = (((2.0 / (std::exp((0.0 - (5.0 * fRec72[0]))) + 1.0)) + (0.29999999999999999 * fRec71[1])) + -1.0);
		fRec70[0] = (0.0 - (fConst73 * ((fConst74 * fRec70[1]) - (fRec71[0] + fRec71[1]))));
		fRec69[0] = (fRec70[0] - (fConst72 * ((fConst76 * fRec69[2]) + (fConst77 * fRec69[1]))));
		double fTemp35 = (fRec69[2] + (fRec69[0] + (2.0 * fRec69[1])));
		fVec10[0] = fTemp35;
		fRec68[0] = ((fConst72 * ((fConst70 * fTemp35) + (fConst71 * fVec10[1]))) - (fConst79 * fRec68[1]));
		fRec67[0] = ((fConst71 * fRec68[1]) - (fConst80 * ((fConst78 * fRec67[1]) - (fConst68 * fRec68[0]))));
		double fTemp36 = (fConst66 * fRec66[1]);
		fRec66[0] = (fRec67[0] - (fConst65 * ((fConst81 * fRec66[2]) + fTemp36)));
		double fTemp37 = ((fTemp36 + (fConst83 * fRec66[0])) + (fConst84 * fRec66[2]));
		fVec11[0] = fTemp37;
		fRec65[0] = (0.0 - (fConst59 * ((fConst60 * fRec65[1]) - (fConst65 * (fTemp37 + fVec11[1])))));
		fRec64[0] = (fRec65[0] - (fConst56 * ((fConst85 * fRec64[2]) + (fConst77 * fRec64[1]))));
		fRec75[0] = (0.0 - (fConst89 * ((fConst90 * fRec75[1]) - (fRec67[0] + fRec67[1]))));
		fRec74[0] = (fRec75[0] - (fConst86 * ((fConst91 * fRec74[2]) + (fConst92 * fRec74[1]))));
		fRec80[0] = ((fConst104 * fRec68[1]) - (fConst105 * ((fConst106 * fRec80[1]) - (fConst102 * fRec68[0]))));
		double fTemp38 = (fConst100 * fRec79[1]);
		fRec79[0] = (fRec80[0] - (fConst99 * ((fConst107 * fRec79[2]) + fTemp38)));
		fRec81[0] = (0.0 - (fConst112 * ((fConst113 * fRec81[1]) - (fRec78[1] + fRec78[2]))));
		fRec78[0] = ((fConst99 * ((fTemp38 + (fConst109 * fRec79[0])) + (fConst110 * fRec79[2]))) - fRec81[0]);
		fRec77[0] = (fRec78[0] - (fConst94 * ((fConst114 * fRec77[2]) + (fConst77 * fRec77[1]))));
		fRec76[0] = ((fConst94 * (fRec77[2] + (fRec77[0] + (2.0 * fRec77[1])))) - (fConst93 * ((fConst115 * fRec76[2]) + (fConst77 * fRec76[1]))));
		double fTemp39 = (fConst100 * fRec85[1]);
		fRec85[0] = (fRec67[0] - (fConst99 * ((fConst107 * fRec85[2]) + fTemp39)));
		fRec86[0] = (0.0 - (fConst112 * ((fConst113 * fRec86[1]) - (fRec84[1] + fRec84[2]))));
		fRec84[0] = ((fConst99 * ((fTemp39 + (fConst109 * fRec85[0])) + (fConst110 * fRec85[2]))) - fRec86[0]);
		fRec83[0] = (fRec84[0] - (fConst117 * ((fConst118 * fRec83[2]) + (fConst119 * fRec83[1]))));
		fRec82[0] = ((fConst117 * (fRec83[2] + (fRec83[0] + (2.0 * fRec83[1])))) - (fConst116 * ((fConst120 * fRec82[2]) + (fConst119 * fRec82[1]))));
		double fTemp40 = (fTemp20 + (iSlow6?(iSlow8?(fConst116 * (fRec82[2] + (fRec82[0] + (2.0 * fRec82[1])))):(fConst93 * (fRec76[2] + (fRec76[0] + (2.0 * fRec76[1]))))):(iSlow8?(fConst86 * (fRec74[2] + (fRec74[0] + (2.0 * fRec74[1])))):(fConst56 * (fRec64[2] + (fRec64[0] + (2.0 * fRec64[1])))))));
		fVec12[(IOTA & 8191)] = fTemp40;
		double fTemp41 = ((fTemp13 * fVec12[((IOTA - iTemp22) & 8191)]) + (fRec18[0] * fVec12[((IOTA - iTemp23) & 8191)]));
		fVec13[(IOTA & 8191)] = fTemp41;
		fRec87[0] = (0.0 - (((fSlow10 * fRec87[1]) - (fRec63[1] + fRec63[2])) / fSlow11));
		fRec63[0] = (((fTemp10 * fVec13[((IOTA - iTemp25) & 8191)]) + (fRec11[0] * fVec13[((IOTA - iTemp26) & 8191)])) - fRec87[0]);
		fRec55[0] = ((iSlow0?fRec63[0]:fTemp34) - (fConst131 * fRec55[1]));
		double fTemp42 = (fConst6 * ((fTemp27 * fRec55[1]) + (0.00025707707823962699 * (fRec55[0] * fTemp28))));
		fRec54[0] = ((int(signbit(double(fTemp42)))?double(output12au7_negclip(double(fTemp42))):double(output12au7clip(double(fTemp42)))) - (fConst3 * ((fConst132 * fRec54[2]) + (fConst133 * fRec54[1]))));
		fRec95[0] = (0.0 - (fConst142 * ((fConst26 * fRec95[1]) - (fConst12 * (fTemp30 + fVec8[1])))));
		fRec94[0] = (fRec95[0] - (fConst134 * ((fConst138 * fRec94[2]) + (fConst30 * fRec94[1]))));
		double fTemp43 = (fRec94[2] + (fRec94[0] + (2.0 * fRec94[1])));
		fVec14[0] = fTemp43;
		fRec93[0] = ((fConst134 * ((fConst141 * fTemp43) + (fConst143 * fVec14[1]))) - (fConst144 * fRec93[1]));
		fRec92[0] = (fRec93[0] - (fConst140 * ((fConst145 * fRec92[2]) + (fConst39 * fRec92[1]))));
		double fTemp44 = (fConst48 * fRec91[1]);
		fRec91[0] = ((fConst140 * (((fConst38 * fRec92[0]) + (fConst146 * fRec92[1])) + (fConst38 * fRec92[2]))) - (fConst43 * ((fConst45 * fRec91[2]) + fTemp44)));
		fRec90[0] = ((fRec91[2] + (fConst43 * (fTemp44 + (fConst45 * fRec91[0])))) - (fConst49 * fRec90[1]));
		double fTemp45 = (fConst9 * ((fRec90[0] * fTemp4) + (0.00027518994799636398 * (fRec8[0] * fRec90[1]))));
		double fTemp46 = (int(signbit(double(fTemp45)))?double(input12au7_negclip(double(fTemp45))):double(input12au7clip(double(fTemp45))));
		fVec15[0] = fTemp46;
		fRec106[0] = (0.0 - (((fSlow10 * fRec106[1]) - (fTemp46 + fVec15[1])) / fSlow11));
		fRec105[0] = (fRec106[0] - (0.29999999999999999 * fRec105[1]));
		fRec104[0] = (((2.0 / (std::exp((0.0 - (5.0 * fRec105[0]))) + 1.0)) + (0.29999999999999999 * fRec104[1])) + -1.0);
		fRec103[0] = (0.0 - (fConst73 * ((fConst74 * fRec103[1]) - (fRec104[0] + fRec104[1]))));
		fRec102[0] = (fRec103[0] - (fConst72 * ((fConst76 * fRec102[2]) + (fConst77 * fRec102[1]))));
		double fTemp47 = (fRec102[2] + (fRec102[0] + (2.0 * fRec102[1])));
		fVec16[0] = fTemp47;
		fRec101[0] = ((fConst72 * ((fConst70 * fTemp47) + (fConst71 * fVec16[1]))) - (fConst79 * fRec101[1]));
		fRec100[0] = ((fConst71 * fRec101[1]) - (fConst80 * ((fConst78 * fRec100[1]) - (fConst68 * fRec101[0]))));
		double fTemp48 = (fConst66 * fRec99[1]);
		fRec99[0] = (fRec100[0] - (fConst65 * ((fConst81 * fRec99[2]) + fTemp48)));
		double fTemp49 = ((fTemp48 + (fConst83 * fRec99[0])) + (fConst84 * fRec99[2]));
		fVec17[0] = fTemp49;
		fRec98[0] = (0.0 - (fConst59 * ((fConst60 * fRec98[1]) - (fConst65 * (fTemp49 + fVec17[1])))));
		fRec97[0] = (fRec98[0] - (fConst56 * ((fConst85 * fRec97[2]) + (fConst77 * fRec97[1]))));
		fRec108[0] = (0.0 - (fConst89 * ((fConst90 * fRec108[1]) - (fRec100[0] + fRec100[1]))));
		fRec107[0] = (fRec108[0] - (fConst86 * ((fConst91 * fRec107[2]) + (fConst92 * fRec107[1]))));
		fRec113[0] = ((fConst104 * fRec101[1]) - (fConst105 * ((fConst106 * fRec113[1]) - (fConst102 * fRec101[0]))));
		double fTemp50 = (fConst100 * fRec112[1]);
		fRec112[0] = (fRec113[0] - (fConst99 * ((fConst107 * fRec112[2]) + fTemp50)));
		fRec114[0] = (0.0 - (fConst112 * ((fConst113 * fRec114[1]) - (fRec111[1] + fRec111[2]))));
		fRec111[0] = ((fConst99 * ((fTemp50 + (fConst109 * fRec112[0])) + (fConst110 * fRec112[2]))) - fRec114[0]);
		fRec110[0] = (fRec111[0] - (fConst94 * ((fConst114 * fRec110[2]) + (fConst77 * fRec110[1]))));
		fRec109[0] = ((fConst94 * (fRec110[2] + (fRec110[0] + (2.0 * fRec110[1])))) - (fConst93 * ((fConst115 * fRec109[2]) + (fConst77 * fRec109[1]))));
		double fTemp51 = (fConst100 * fRec118[1]);
		fRec118[0] = (fRec100[0] - (fConst99 * ((fConst107 * fRec118[2]) + fTemp51)));
		fRec119[0] = (0.0 - (fConst112 * ((fConst113 * fRec119[1]) - (fRec117[1] + fRec117[2]))));
		fRec117[0] = ((fConst99 * ((fTemp51 + (fConst109 * fRec118[0])) + (fConst110 * fRec118[2]))) - fRec119[0]);
		fRec116[0] = (fRec117[0] - (fConst117 * ((fConst118 * fRec116[2]) + (fConst119 * fRec116[1]))));
		fRec115[0] = ((fConst117 * (fRec116[2] + (fRec116[0] + (2.0 * fRec116[1])))) - (fConst116 * ((fConst120 * fRec115[2]) + (fConst119 * fRec115[1]))));
		double fTemp52 = (fTemp20 + (iSlow6?(iSlow8?(fConst116 * (fRec115[2] + (fRec115[0] + (2.0 * fRec115[1])))):(fConst93 * (fRec109[2] + (fRec109[0] + (2.0 * fRec109[1]))))):(iSlow8?(fConst86 * (fRec107[2] + (fRec107[0] + (2.0 * fRec107[1])))):(fConst56 * (fRec97[2] + (fRec97[0] + (2.0 * fRec97[1])))))));
		fVec18[(IOTA & 8191)] = fTemp52;
		double fTemp53 = ((fTemp13 * fVec18[((IOTA - iTemp22) & 8191)]) + (fRec18[0] * fVec18[((IOTA - iTemp23) & 8191)]));
		fVec19[(IOTA & 8191)] = fTemp53;
		fRec120[0] = (0.0 - (((fSlow10 * fRec120[1]) - (fRec96[1] + fRec96[2])) / fSlow11));
		fRec96[0] = (((fTemp10 * fVec19[((IOTA - iTemp25) & 8191)]) + (fRec11[0] * fVec19[((IOTA - iTemp26) & 8191)])) - fRec120[0]);
		fRec89[0] = ((iSlow0?fRec96[0]:fTemp46) - (fConst131 * fRec89[1]));
		double fTemp54 = (fConst6 * ((fTemp27 * fRec89[1]) + (0.00025707707823962699 * (fRec89[0] * fTemp28))));
		fRec88[0] = ((int(signbit(double(fTemp54)))?double(output12au7_negclip(double(fTemp54))):double(output12au7clip(double(fTemp54)))) - (fConst3 * ((fConst132 * fRec88[2]) + (fConst133 * fRec88[1]))));
		fRec127[0] = (0.0 - (fConst149 * ((fConst35 * fRec127[1]) - (fConst134 * (fTemp43 + fVec14[1])))));
		fRec126[0] = (fRec127[0] - (fConst140 * ((fConst145 * fRec126[2]) + (fConst39 * fRec126[1]))));
		double fTemp55 = (fRec126[2] + (fRec126[0] + (2.0 * fRec126[1])));
		fVec20[0] = fTemp55;
		fRec125[0] = ((fConst140 * ((fConst148 * fTemp55) + (fConst150 * fVec20[1]))) - (fConst151 * fRec125[1]));
		fRec124[0] = (fRec125[0] - (fConst147 * ((fConst152 * fRec124[2]) + (fConst48 * fRec124[1]))));
		fRec123[0] = ((fConst147 * (((fConst47 * fRec124[0]) + (fConst153 * fRec124[1])) + (fConst47 * fRec124[2]))) - (fConst49 * fRec123[1]));
		double fTemp56 = (fConst9 * ((fRec123[0] * fTemp4) + (0.00027518994799636398 * (fRec8[0] * fRec123[1]))));
		double fTemp57 = (int(signbit(double(fTemp56)))?double(input12au7_negclip(double(fTemp56))):double(input12au7clip(double(fTemp56))));
		fVec21[0] = fTemp57;
		fRec138[0] = (0.0 - (((fSlow10 * fRec138[1]) - (fTemp57 + fVec21[1])) / fSlow11));
		fRec137[0] = (fRec138[0] - (0.29999999999999999 * fRec137[1]));
		fRec136[0] = (((2.0 / (std::exp((0.0 - (5.0 * fRec137[0]))) + 1.0)) + (0.29999999999999999 * fRec136[1])) + -1.0);
		fRec135[0] = (0.0 - (fConst73 * ((fConst74 * fRec135[1]) - (fRec136[0] + fRec136[1]))));
		fRec134[0] = (fRec135[0] - (fConst72 * ((fConst76 * fRec134[2]) + (fConst77 * fRec134[1]))));
		double fTemp58 = (fRec134[2] + (fRec134[0] + (2.0 * fRec134[1])));
		fVec22[0] = fTemp58;
		fRec133[0] = ((fConst72 * ((fConst70 * fTemp58) + (fConst71 * fVec22[1]))) - (fConst79 * fRec133[1]));
		fRec132[0] = ((fConst71 * fRec133[1]) - (fConst80 * ((fConst78 * fRec132[1]) - (fConst68 * fRec133[0]))));
		double fTemp59 = (fConst66 * fRec131[1]);
		fRec131[0] = (fRec132[0] - (fConst65 * ((fConst81 * fRec131[2]) + fTemp59)));
		double fTemp60 = ((fTemp59 + (fConst83 * fRec131[0])) + (fConst84 * fRec131[2]));
		fVec23[0] = fTemp60;
		fRec130[0] = (0.0 - (fConst59 * ((fConst60 * fRec130[1]) - (fConst65 * (fTemp60 + fVec23[1])))));
		fRec129[0] = (fRec130[0] - (fConst56 * ((fConst85 * fRec129[2]) + (fConst77 * fRec129[1]))));
		fRec140[0] = (0.0 - (fConst89 * ((fConst90 * fRec140[1]) - (fRec132[0] + fRec132[1]))));
		fRec139[0] = (fRec140[0] - (fConst86 * ((fConst91 * fRec139[2]) + (fConst92 * fRec139[1]))));
		fRec145[0] = ((fConst104 * fRec133[1]) - (fConst105 * ((fConst106 * fRec145[1]) - (fConst102 * fRec133[0]))));
		double fTemp61 = (fConst100 * fRec144[1]);
		fRec144[0] = (fRec145[0] - (fConst99 * ((fConst107 * fRec144[2]) + fTemp61)));
		fRec146[0] = (0.0 - (fConst112 * ((fConst113 * fRec146[1]) - (fRec143[1] + fRec143[2]))));
		fRec143[0] = ((fConst99 * ((fTemp61 + (fConst109 * fRec144[0])) + (fConst110 * fRec144[2]))) - fRec146[0]);
		fRec142[0] = (fRec143[0] - (fConst94 * ((fConst114 * fRec142[2]) + (fConst77 * fRec142[1]))));
		fRec141[0] = ((fConst94 * (fRec142[2] + (fRec142[0] + (2.0 * fRec142[1])))) - (fConst93 * ((fConst115 * fRec141[2]) + (fConst77 * fRec141[1]))));
		double fTemp62 = (fConst100 * fRec150[1]);
		fRec150[0] = (fRec132[0] - (fConst99 * ((fConst107 * fRec150[2]) + fTemp62)));
		fRec151[0] = (0.0 - (fConst112 * ((fConst113 * fRec151[1]) - (fRec149[1] + fRec149[2]))));
		fRec149[0] = ((fConst99 * ((fTemp62 + (fConst109 * fRec150[0])) + (fConst110 * fRec150[2]))) - fRec151[0]);
		fRec148[0] = (fRec149[0] - (fConst117 * ((fConst118 * fRec148[2]) + (fConst119 * fRec148[1]))));
		fRec147[0] = ((fConst117 * (fRec148[2] + (fRec148[0] + (2.0 * fRec148[1])))) - (fConst116 * ((fConst120 * fRec147[2]) + (fConst119 * fRec147[1]))));
		double fTemp63 = (fTemp20 + (iSlow6?(iSlow8?(fConst116 * (fRec147[2] + (fRec147[0] + (2.0 * fRec147[1])))):(fConst93 * (fRec141[2] + (fRec141[0] + (2.0 * fRec141[1]))))):(iSlow8?(fConst86 * (fRec139[2] + (fRec139[0] + (2.0 * fRec139[1])))):(fConst56 * (fRec129[2] + (fRec129[0] + (2.0 * fRec129[1])))))));
		fVec24[(IOTA & 8191)] = fTemp63;
		double fTemp64 = ((fTemp13 * fVec24[((IOTA - iTemp22) & 8191)]) + (fRec18[0] * fVec24[((IOTA - iTemp23) & 8191)]));
		fVec25[(IOTA & 8191)] = fTemp64;
		fRec152[0] = (0.0 - (((fSlow10 * fRec152[1]) - (fRec128[1] + fRec128[2])) / fSlow11));
		fRec128[0] = (((fTemp10 * fVec25[((IOTA - iTemp25) & 8191)]) + (fRec11[0] * fVec25[((IOTA - iTemp26) & 8191)])) - fRec152[0]);
		fRec122[0] = ((iSlow0?fRec128[0]:fTemp57) - (fConst131 * fRec122[1]));
		double fTemp65 = (fConst6 * ((fTemp27 * fRec122[1]) + (0.00025707707823962699 * (fRec122[0] * fTemp28))));
		fRec121[0] = ((int(signbit(double(fTemp65)))?double(output12au7_negclip(double(fTemp65))):double(output12au7clip(double(fTemp65)))) - (fConst3 * ((fConst132 * fRec121[2]) + (fConst133 * fRec121[1]))));
		fRec157[0] = (0.0 - (fConst154 * ((fConst44 * fRec157[1]) - (fConst140 * (fTemp55 + fVec20[1])))));
		fRec156[0] = (fRec157[0] - (fConst147 * ((fConst152 * fRec156[2]) + (fConst48 * fRec156[1]))));
		fRec155[0] = ((fConst147 * (fRec156[2] + (fRec156[0] + (2.0 * fRec156[1])))) - (fConst49 * fRec155[1]));
		double fTemp66 = (fConst9 * ((fRec155[0] * fTemp4) + (0.00027518994799636398 * (fRec8[0] * fRec155[1]))));
		double fTemp67 = (int(signbit(double(fTemp66)))?double(input12au7_negclip(double(fTemp66))):double(input12au7clip(double(fTemp66))));
		fVec26[0] = fTemp67;
		fRec168[0] = (0.0 - (((fSlow10 * fRec168[1]) - (fTemp67 + fVec26[1])) / fSlow11));
		fRec167[0] = (fRec168[0] - (0.29999999999999999 * fRec167[1]));
		fRec166[0] = (((2.0 / (std::exp((0.0 - (5.0 * fRec167[0]))) + 1.0)) + (0.29999999999999999 * fRec166[1])) + -1.0);
		fRec165[0] = (0.0 - (fConst73 * ((fConst74 * fRec165[1]) - (fRec166[0] + fRec166[1]))));
		fRec164[0] = (fRec165[0] - (fConst72 * ((fConst76 * fRec164[2]) + (fConst77 * fRec164[1]))));
		double fTemp68 = (fRec164[2] + (fRec164[0] + (2.0 * fRec164[1])));
		fVec27[0] = fTemp68;
		fRec163[0] = ((fConst72 * ((fConst70 * fTemp68) + (fConst71 * fVec27[1]))) - (fConst79 * fRec163[1]));
		fRec162[0] = ((fConst71 * fRec163[1]) - (fConst80 * ((fConst78 * fRec162[1]) - (fConst68 * fRec163[0]))));
		double fTemp69 = (fConst66 * fRec161[1]);
		fRec161[0] = (fRec162[0] - (fConst65 * ((fConst81 * fRec161[2]) + fTemp69)));
		double fTemp70 = ((fTemp69 + (fConst83 * fRec161[0])) + (fConst84 * fRec161[2]));
		fVec28[0] = fTemp70;
		fRec160[0] = (0.0 - (fConst59 * ((fConst60 * fRec160[1]) - (fConst65 * (fTemp70 + fVec28[1])))));
		fRec159[0] = (fRec160[0] - (fConst56 * ((fConst85 * fRec159[2]) + (fConst77 * fRec159[1]))));
		fRec170[0] = (0.0 - (fConst89 * ((fConst90 * fRec170[1]) - (fRec162[0] + fRec162[1]))));
		fRec169[0] = (fRec170[0] - (fConst86 * ((fConst91 * fRec169[2]) + (fConst92 * fRec169[1]))));
		fRec175[0] = ((fConst104 * fRec163[1]) - (fConst105 * ((fConst106 * fRec175[1]) - (fConst102 * fRec163[0]))));
		double fTemp71 = (fConst100 * fRec174[1]);
		fRec174[0] = (fRec175[0] - (fConst99 * ((fConst107 * fRec174[2]) + fTemp71)));
		fRec176[0] = (0.0 - (fConst112 * ((fConst113 * fRec176[1]) - (fRec173[1] + fRec173[2]))));
		fRec173[0] = ((fConst99 * ((fTemp71 + (fConst109 * fRec174[0])) + (fConst110 * fRec174[2]))) - fRec176[0]);
		fRec172[0] = (fRec173[0] - (fConst94 * ((fConst114 * fRec172[2]) + (fConst77 * fRec172[1]))));
		fRec171[0] = ((fConst94 * (fRec172[2] + (fRec172[0] + (2.0 * fRec172[1])))) - (fConst93 * ((fConst115 * fRec171[2]) + (fConst77 * fRec171[1]))));
		double fTemp72 = (fConst100 * fRec180[1]);
		fRec180[0] = (fRec162[0] - (fConst99 * ((fConst107 * fRec180[2]) + fTemp72)));
		fRec181[0] = (0.0 - (fConst112 * ((fConst113 * fRec181[1]) - (fRec179[1] + fRec179[2]))));
		fRec179[0] = ((fConst99 * ((fTemp72 + (fConst109 * fRec180[0])) + (fConst110 * fRec180[2]))) - fRec181[0]);
		fRec178[0] = (fRec179[0] - (fConst117 * ((fConst118 * fRec178[2]) + (fConst119 * fRec178[1]))));
		fRec177[0] = ((fConst117 * (fRec178[2] + (fRec178[0] + (2.0 * fRec178[1])))) - (fConst116 * ((fConst120 * fRec177[2]) + (fConst119 * fRec177[1]))));
		double fTemp73 = (fTemp20 + (iSlow6?(iSlow8?(fConst116 * (fRec177[2] + (fRec177[0] + (2.0 * fRec177[1])))):(fConst93 * (fRec171[2] + (fRec171[0] + (2.0 * fRec171[1]))))):(iSlow8?(fConst86 * (fRec169[2] + (fRec169[0] + (2.0 * fRec169[1])))):(fConst56 * (fRec159[2] + (fRec159[0] + (2.0 * fRec159[1])))))));
		fVec29[(IOTA & 8191)] = fTemp73;
		double fTemp74 = ((fTemp13 * fVec29[((IOTA - iTemp22) & 8191)]) + (fRec18[0] * fVec29[((IOTA - iTemp23) & 8191)]));
		fVec30[(IOTA & 8191)] = fTemp74;
		fRec182[0] = (0.0 - (((fSlow10 * fRec182[1]) - (fRec158[1] + fRec158[2])) / fSlow11));
		fRec158[0] = (((fTemp10 * fVec30[((IOTA - iTemp25) & 8191)]) + (fRec11[0] * fVec30[((IOTA - iTemp26) & 8191)])) - fRec182[0]);
		fRec154[0] = ((iSlow0?fRec158[0]:fTemp67) - (fConst131 * fRec154[1]));
		double fTemp75 = (fConst6 * ((fTemp27 * fRec154[1]) + (0.00025707707823962699 * (fRec154[0] * fTemp28))));
		fRec153[0] = ((int(signbit(double(fTemp75)))?double(output12au7_negclip(double(fTemp75))):double(output12au7clip(double(fTemp75)))) - (fConst3 * ((fConst132 * fRec153[2]) + (fConst133 * fRec153[1]))));
		output0[i] = FAUSTFLOAT((fConst3 * (((((fRec0[2] + (fRec0[0] + (2.0 * fRec0[1]))) + (fRec54[2] + (fRec54[0] + (2.0 * fRec54[1])))) + (fRec88[2] + (fRec88[0] + (2.0 * fRec88[1])))) + (fRec121[2] + (fRec121[0] + (2.0 * fRec121[1])))) + (fRec153[2] + (fRec153[0] + (2.0 * fRec153[1]))))));
		fVec0[1] = fVec0[0];
		iVec1[1] = iVec1[0];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1];
		fRec4[1] = fRec4[0];
		fRec3[2] = fRec3[1];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
		fRec8[1] = fRec8[0];
		fVec2[1] = fVec2[0];
		fRec16[1] = fRec16[0];
		fRec15[1] = fRec15[0];
		fRec14[1] = fRec14[0];
		fRec10[1] = fRec10[0];
		fRec11[1] = fRec11[0];
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		fRec17[1] = fRec17[0];
		fRec18[1] = fRec18[0];
		fRec19[1] = fRec19[0];
		fRec20[1] = fRec20[0];
		fRec33[1] = fRec33[0];
		fRec32[1] = fRec32[0];
		fRec31[1] = fRec31[0];
		fRec30[1] = fRec30[0];
		fRec29[2] = fRec29[1];
		fRec29[1] = fRec29[0];
		fVec3[1] = fVec3[0];
		fRec28[1] = fRec28[0];
		fRec27[1] = fRec27[0];
		fRec26[2] = fRec26[1];
		fRec26[1] = fRec26[0];
		fVec4[1] = fVec4[0];
		fRec25[1] = fRec25[0];
		fRec24[2] = fRec24[1];
		fRec24[1] = fRec24[0];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fRec40[1] = fRec40[0];
		fRec39[2] = fRec39[1];
		fRec39[1] = fRec39[0];
		fRec41[1] = fRec41[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fRec37[2] = fRec37[1];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
		fRec45[2] = fRec45[1];
		fRec45[1] = fRec45[0];
		fRec46[1] = fRec46[0];
		fRec44[2] = fRec44[1];
		fRec44[1] = fRec44[0];
		fRec43[2] = fRec43[1];
		fRec43[1] = fRec43[0];
		fRec42[2] = fRec42[1];
		fRec42[1] = fRec42[0];
		fRec49[1] = fRec49[0];
		iRec50[1] = iRec50[0];
		fVec5[1] = fVec5[0];
		fRec48[1] = fRec48[0];
		fRec51[1] = fRec51[0];
		fRec47[2] = fRec47[1];
		fRec47[1] = fRec47[0];
		IOTA = (IOTA + 1);
		fRec52[1] = fRec52[0];
		fRec9[2] = fRec9[1];
		fRec9[1] = fRec9[0];
		fRec1[1] = fRec1[0];
		fRec53[1] = fRec53[0];
		fRec0[2] = fRec0[1];
		fRec0[1] = fRec0[0];
		fRec62[1] = fRec62[0];
		fRec61[2] = fRec61[1];
		fRec61[1] = fRec61[0];
		fVec8[1] = fVec8[0];
		fRec60[1] = fRec60[0];
		fRec59[2] = fRec59[1];
		fRec59[1] = fRec59[0];
		fRec58[2] = fRec58[1];
		fRec58[1] = fRec58[0];
		fRec57[2] = fRec57[1];
		fRec57[1] = fRec57[0];
		fRec56[1] = fRec56[0];
		fVec9[1] = fVec9[0];
		fRec73[1] = fRec73[0];
		fRec72[1] = fRec72[0];
		fRec71[1] = fRec71[0];
		fRec70[1] = fRec70[0];
		fRec69[2] = fRec69[1];
		fRec69[1] = fRec69[0];
		fVec10[1] = fVec10[0];
		fRec68[1] = fRec68[0];
		fRec67[1] = fRec67[0];
		fRec66[2] = fRec66[1];
		fRec66[1] = fRec66[0];
		fVec11[1] = fVec11[0];
		fRec65[1] = fRec65[0];
		fRec64[2] = fRec64[1];
		fRec64[1] = fRec64[0];
		fRec75[1] = fRec75[0];
		fRec74[2] = fRec74[1];
		fRec74[1] = fRec74[0];
		fRec80[1] = fRec80[0];
		fRec79[2] = fRec79[1];
		fRec79[1] = fRec79[0];
		fRec81[1] = fRec81[0];
		fRec78[2] = fRec78[1];
		fRec78[1] = fRec78[0];
		fRec77[2] = fRec77[1];
		fRec77[1] = fRec77[0];
		fRec76[2] = fRec76[1];
		fRec76[1] = fRec76[0];
		fRec85[2] = fRec85[1];
		fRec85[1] = fRec85[0];
		fRec86[1] = fRec86[0];
		fRec84[2] = fRec84[1];
		fRec84[1] = fRec84[0];
		fRec83[2] = fRec83[1];
		fRec83[1] = fRec83[0];
		fRec82[2] = fRec82[1];
		fRec82[1] = fRec82[0];
		fRec87[1] = fRec87[0];
		fRec63[2] = fRec63[1];
		fRec63[1] = fRec63[0];
		fRec55[1] = fRec55[0];
		fRec54[2] = fRec54[1];
		fRec54[1] = fRec54[0];
		fRec95[1] = fRec95[0];
		fRec94[2] = fRec94[1];
		fRec94[1] = fRec94[0];
		fVec14[1] = fVec14[0];
		fRec93[1] = fRec93[0];
		fRec92[2] = fRec92[1];
		fRec92[1] = fRec92[0];
		fRec91[2] = fRec91[1];
		fRec91[1] = fRec91[0];
		fRec90[1] = fRec90[0];
		fVec15[1] = fVec15[0];
		fRec106[1] = fRec106[0];
		fRec105[1] = fRec105[0];
		fRec104[1] = fRec104[0];
		fRec103[1] = fRec103[0];
		fRec102[2] = fRec102[1];
		fRec102[1] = fRec102[0];
		fVec16[1] = fVec16[0];
		fRec101[1] = fRec101[0];
		fRec100[1] = fRec100[0];
		fRec99[2] = fRec99[1];
		fRec99[1] = fRec99[0];
		fVec17[1] = fVec17[0];
		fRec98[1] = fRec98[0];
		fRec97[2] = fRec97[1];
		fRec97[1] = fRec97[0];
		fRec108[1] = fRec108[0];
		fRec107[2] = fRec107[1];
		fRec107[1] = fRec107[0];
		fRec113[1] = fRec113[0];
		fRec112[2] = fRec112[1];
		fRec112[1] = fRec112[0];
		fRec114[1] = fRec114[0];
		fRec111[2] = fRec111[1];
		fRec111[1] = fRec111[0];
		fRec110[2] = fRec110[1];
		fRec110[1] = fRec110[0];
		fRec109[2] = fRec109[1];
		fRec109[1] = fRec109[0];
		fRec118[2] = fRec118[1];
		fRec118[1] = fRec118[0];
		fRec119[1] = fRec119[0];
		fRec117[2] = fRec117[1];
		fRec117[1] = fRec117[0];
		fRec116[2] = fRec116[1];
		fRec116[1] = fRec116[0];
		fRec115[2] = fRec115[1];
		fRec115[1] = fRec115[0];
		fRec120[1] = fRec120[0];
		fRec96[2] = fRec96[1];
		fRec96[1] = fRec96[0];
		fRec89[1] = fRec89[0];
		fRec88[2] = fRec88[1];
		fRec88[1] = fRec88[0];
		fRec127[1] = fRec127[0];
		fRec126[2] = fRec126[1];
		fRec126[1] = fRec126[0];
		fVec20[1] = fVec20[0];
		fRec125[1] = fRec125[0];
		fRec124[2] = fRec124[1];
		fRec124[1] = fRec124[0];
		fRec123[1] = fRec123[0];
		fVec21[1] = fVec21[0];
		fRec138[1] = fRec138[0];
		fRec137[1] = fRec137[0];
		fRec136[1] = fRec136[0];
		fRec135[1] = fRec135[0];
		fRec134[2] = fRec134[1];
		fRec134[1] = fRec134[0];
		fVec22[1] = fVec22[0];
		fRec133[1] = fRec133[0];
		fRec132[1] = fRec132[0];
		fRec131[2] = fRec131[1];
		fRec131[1] = fRec131[0];
		fVec23[1] = fVec23[0];
		fRec130[1] = fRec130[0];
		fRec129[2] = fRec129[1];
		fRec129[1] = fRec129[0];
		fRec140[1] = fRec140[0];
		fRec139[2] = fRec139[1];
		fRec139[1] = fRec139[0];
		fRec145[1] = fRec145[0];
		fRec144[2] = fRec144[1];
		fRec144[1] = fRec144[0];
		fRec146[1] = fRec146[0];
		fRec143[2] = fRec143[1];
		fRec143[1] = fRec143[0];
		fRec142[2] = fRec142[1];
		fRec142[1] = fRec142[0];
		fRec141[2] = fRec141[1];
		fRec141[1] = fRec141[0];
		fRec150[2] = fRec150[1];
		fRec150[1] = fRec150[0];
		fRec151[1] = fRec151[0];
		fRec149[2] = fRec149[1];
		fRec149[1] = fRec149[0];
		fRec148[2] = fRec148[1];
		fRec148[1] = fRec148[0];
		fRec147[2] = fRec147[1];
		fRec147[1] = fRec147[0];
		fRec152[1] = fRec152[0];
		fRec128[2] = fRec128[1];
		fRec128[1] = fRec128[0];
		fRec122[1] = fRec122[0];
		fRec121[2] = fRec121[1];
		fRec121[1] = fRec121[0];
		fRec157[1] = fRec157[0];
		fRec156[2] = fRec156[1];
		fRec156[1] = fRec156[0];
		fRec155[1] = fRec155[0];
		fVec26[1] = fVec26[0];
		fRec168[1] = fRec168[0];
		fRec167[1] = fRec167[0];
		fRec166[1] = fRec166[0];
		fRec165[1] = fRec165[0];
		fRec164[2] = fRec164[1];
		fRec164[1] = fRec164[0];
		fVec27[1] = fVec27[0];
		fRec163[1] = fRec163[0];
		fRec162[1] = fRec162[0];
		fRec161[2] = fRec161[1];
		fRec161[1] = fRec161[0];
		fVec28[1] = fVec28[0];
		fRec160[1] = fRec160[0];
		fRec159[2] = fRec159[1];
		fRec159[1] = fRec159[0];
		fRec170[1] = fRec170[0];
		fRec169[2] = fRec169[1];
		fRec169[1] = fRec169[0];
		fRec175[1] = fRec175[0];
		fRec174[2] = fRec174[1];
		fRec174[1] = fRec174[0];
		fRec176[1] = fRec176[0];
		fRec173[2] = fRec173[1];
		fRec173[1] = fRec173[0];
		fRec172[2] = fRec172[1];
		fRec172[1] = fRec172[0];
		fRec171[2] = fRec171[1];
		fRec171[1] = fRec171[0];
		fRec180[2] = fRec180[1];
		fRec180[1] = fRec180[0];
		fRec181[1] = fRec181[0];
		fRec179[2] = fRec179[1];
		fRec179[1] = fRec179[0];
		fRec178[2] = fRec178[1];
		fRec178[1] = fRec178[0];
		fRec177[2] = fRec177[1];
		fRec177[1] = fRec177[0];
		fRec182[1] = fRec182[0];
		fRec158[2] = fRec158[1];
		fRec158[1] = fRec158[0];
		fRec154[1] = fRec154[0];
		fRec153[2] = fRec153[1];
		fRec153[1] = fRec153[0];
	}
#undef fCheckbox0
#undef fVslider0
#undef fVslider1
#undef fVslider2
#undef fVslider3
#undef fVslider4
#undef fVslider5
#undef fCheckbox1
#undef fVslider6
#undef fVslider7
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DRIVE: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case FLUTTERDEPTH: 
		fVslider1_ = (float*)data; // , 0.0, 0.0, 0.029999999999999999, 0.001 
		break;
	case FLUTTERFREQ: 
		fVslider2_ = (float*)data; // , 4.0, 4.0, 60.0, 0.10000000000000001 
		break;
	case GAIN: 
		fVslider7_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case ON: 
		fCheckbox0_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case WOWDEPTH: 
		fVslider3_ = (float*)data; // , 0.0, 0.0, 0.029999999999999999, 0.001 
		break;
	case WOWFREQ: 
		fVslider4_ = (float*)data; // , 0.0, 0.0, 4.0, 0.10000000000000001 
		break;
	case SPEED: 
		fCheckbox1_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case TAPEHISS: 
		fVslider6_ = (float*)data; // , 0.0, 0.0, 1.0, 0.01 
		break;
	case TAPETYPE: 
		fVslider5_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
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
   DRIVE, 
   FLUTTERDEPTH, 
   FLUTTERFREQ, 
   GAIN, 
   ON, 
   WOWDEPTH, 
   WOWFREQ, 
   SPEED, 
   TAPEHISS, 
   TAPETYPE, 
} PortIndex;
*/

} // end namespace gxtape
