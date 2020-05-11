// generated from file '../src/LV2/faust/gxechocat.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "copicat1_neg_table.h"
#include "copicat1_table.h"
#include "copicatrecord_2_neg_table.h"
#include "copicatrecord_2_table.h"
#include "copicatreplay1_neg_table.h"
#include "copicatreplay1_table.h"
#include "copicatreplay2_neg_table.h"
#include "copicatreplay2_table.h"
#include "math.h"

namespace gxechocat {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec0[2];
	double fConst0;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec1[2];
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fVec0[2];
	double fConst10;
	double fConst11;
	double fRec7[2];
	double fConst12;
	double fConst13;
	double fRec6[3];
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fRec5[3];
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fRec4[3];
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fRec3[3];
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fRec2[3];
	double fConst53;
	double fConst54;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
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
	FAUSTFLOAT fCheckbox0;
	FAUSTFLOAT	*fCheckbox0_;
	double fConst71;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fConst72;
	double fConst73;
	double fRec13[2];
	double fRec14[2];
	double fRec15[2];
	double fRec16[2];
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
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT	*fVslider4_;
	double fConst85;
	double fConst86;
	double fConst87;
	double fRec21[2];
	double fVec1[2];
	double fConst88;
	double fConst89;
	double fConst90;
	double fRec20[2];
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fRec19[4];
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fRec18[3];
	double fConst100;
	double fConst101;
	double fRec17[3];
	int IOTA;
	double *fVec2;
	FAUSTFLOAT fCheckbox1;
	FAUSTFLOAT	*fCheckbox1_;
	double fConst102;
	double fRec22[2];
	double fRec23[2];
	double fRec24[2];
	double fRec25[2];
	FAUSTFLOAT fCheckbox2;
	FAUSTFLOAT	*fCheckbox2_;
	double fConst103;
	double fRec26[2];
	double fRec27[2];
	double fRec28[2];
	double fRec29[2];
	double fVec3[2];
	double fRec12[2];
	double fRec11[2];
	double fConst104;
	double fConst105;
	double fConst106;
	double fRec10[3];
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fRec9[4];
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fRec8[3];
	double fConst118;
	double fConst119;
	double fRec36[2];
	double fRec35[3];
	double fVec4[2];
	double fConst120;
	double fConst121;
	double fRec34[2];
	double fConst122;
	double fRec33[3];
	double fConst123;
	double fRec32[3];
	double fRec31[3];
	double fRec30[3];
	double fRec46[2];
	double fVec5[2];
	double fRec45[2];
	double fRec44[4];
	double fRec43[3];
	double fRec42[3];
	double *fVec6;
	double fVec7[2];
	double fRec41[2];
	double fRec40[2];
	double fRec39[3];
	double fRec38[4];
	double fRec37[3];
	double fConst124;
	double fConst125;
	double fConst126;
	double fRec52[2];
	double fRec51[3];
	double fVec8[2];
	double fConst127;
	double fConst128;
	double fRec50[2];
	double fConst129;
	double fRec49[3];
	double fConst130;
	double fRec48[3];
	double fRec47[3];
	double fRec62[2];
	double fVec9[2];
	double fRec61[2];
	double fRec60[4];
	double fRec59[3];
	double fRec58[3];
	double *fVec10;
	double fVec11[2];
	double fRec57[2];
	double fRec56[2];
	double fRec55[3];
	double fRec54[4];
	double fRec53[3];
	double fConst131;
	double fConst132;
	double fConst133;
	double fRec67[2];
	double fRec66[3];
	double fVec12[2];
	double fConst134;
	double fConst135;
	double fRec65[2];
	double fConst136;
	double fRec64[3];
	double fConst137;
	double fRec63[3];
	double fRec77[2];
	double fVec13[2];
	double fRec76[2];
	double fRec75[4];
	double fRec74[3];
	double fRec73[3];
	double *fVec14;
	double fVec15[2];
	double fRec72[2];
	double fRec71[2];
	double fRec70[3];
	double fRec69[4];
	double fRec68[3];
	double fConst138;
	double fRec80[2];
	double fRec79[3];
	double fRec78[3];
	double fRec90[2];
	double fVec16[2];
	double fRec89[2];
	double fRec88[4];
	double fRec87[3];
	double fRec86[3];
	double *fVec17;
	double fVec18[2];
	double fRec85[2];
	double fRec84[2];
	double fRec83[3];
	double fRec82[4];
	double fRec81[3];

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
	  fVec2(0),
	  fVec6(0),
	  fVec10(0),
	  fVec14(0),
	  fVec17(0),
	  mem_allocated(false) {
	version = PLUGINLV2_VERSION;
	id = "gxechocat";
	name = N_("Tape Delay");
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
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec1[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fVec0[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fRec7[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec6[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec5[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec4[l6] = 0.0;
	for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) fRec3[l7] = 0.0;
	for (int l8 = 0; (l8 < 3); l8 = (l8 + 1)) fRec2[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec13[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec14[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec15[l11] = 0.0;
	for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) fRec16[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec21[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fVec1[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec20[l15] = 0.0;
	for (int l16 = 0; (l16 < 4); l16 = (l16 + 1)) fRec19[l16] = 0.0;
	for (int l17 = 0; (l17 < 3); l17 = (l17 + 1)) fRec18[l17] = 0.0;
	for (int l18 = 0; (l18 < 3); l18 = (l18 + 1)) fRec17[l18] = 0.0;
	for (int l19 = 0; (l19 < 1048576); l19 = (l19 + 1)) fVec2[l19] = 0.0;
	for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) fRec22[l20] = 0.0;
	for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) fRec23[l21] = 0.0;
	for (int l22 = 0; (l22 < 2); l22 = (l22 + 1)) fRec24[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fRec25[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec26[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec27[l25] = 0.0;
	for (int l26 = 0; (l26 < 2); l26 = (l26 + 1)) fRec28[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fRec29[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fVec3[l28] = 0.0;
	for (int l29 = 0; (l29 < 2); l29 = (l29 + 1)) fRec12[l29] = 0.0;
	for (int l30 = 0; (l30 < 2); l30 = (l30 + 1)) fRec11[l30] = 0.0;
	for (int l31 = 0; (l31 < 3); l31 = (l31 + 1)) fRec10[l31] = 0.0;
	for (int l32 = 0; (l32 < 4); l32 = (l32 + 1)) fRec9[l32] = 0.0;
	for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) fRec8[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fRec36[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec35[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fVec4[l36] = 0.0;
	for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) fRec34[l37] = 0.0;
	for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) fRec33[l38] = 0.0;
	for (int l39 = 0; (l39 < 3); l39 = (l39 + 1)) fRec32[l39] = 0.0;
	for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) fRec31[l40] = 0.0;
	for (int l41 = 0; (l41 < 3); l41 = (l41 + 1)) fRec30[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fRec46[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fVec5[l43] = 0.0;
	for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) fRec45[l44] = 0.0;
	for (int l45 = 0; (l45 < 4); l45 = (l45 + 1)) fRec44[l45] = 0.0;
	for (int l46 = 0; (l46 < 3); l46 = (l46 + 1)) fRec43[l46] = 0.0;
	for (int l47 = 0; (l47 < 3); l47 = (l47 + 1)) fRec42[l47] = 0.0;
	for (int l48 = 0; (l48 < 1048576); l48 = (l48 + 1)) fVec6[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fVec7[l49] = 0.0;
	for (int l50 = 0; (l50 < 2); l50 = (l50 + 1)) fRec41[l50] = 0.0;
	for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) fRec40[l51] = 0.0;
	for (int l52 = 0; (l52 < 3); l52 = (l52 + 1)) fRec39[l52] = 0.0;
	for (int l53 = 0; (l53 < 4); l53 = (l53 + 1)) fRec38[l53] = 0.0;
	for (int l54 = 0; (l54 < 3); l54 = (l54 + 1)) fRec37[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fRec52[l55] = 0.0;
	for (int l56 = 0; (l56 < 3); l56 = (l56 + 1)) fRec51[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fVec8[l57] = 0.0;
	for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) fRec50[l58] = 0.0;
	for (int l59 = 0; (l59 < 3); l59 = (l59 + 1)) fRec49[l59] = 0.0;
	for (int l60 = 0; (l60 < 3); l60 = (l60 + 1)) fRec48[l60] = 0.0;
	for (int l61 = 0; (l61 < 3); l61 = (l61 + 1)) fRec47[l61] = 0.0;
	for (int l62 = 0; (l62 < 2); l62 = (l62 + 1)) fRec62[l62] = 0.0;
	for (int l63 = 0; (l63 < 2); l63 = (l63 + 1)) fVec9[l63] = 0.0;
	for (int l64 = 0; (l64 < 2); l64 = (l64 + 1)) fRec61[l64] = 0.0;
	for (int l65 = 0; (l65 < 4); l65 = (l65 + 1)) fRec60[l65] = 0.0;
	for (int l66 = 0; (l66 < 3); l66 = (l66 + 1)) fRec59[l66] = 0.0;
	for (int l67 = 0; (l67 < 3); l67 = (l67 + 1)) fRec58[l67] = 0.0;
	for (int l68 = 0; (l68 < 1048576); l68 = (l68 + 1)) fVec10[l68] = 0.0;
	for (int l69 = 0; (l69 < 2); l69 = (l69 + 1)) fVec11[l69] = 0.0;
	for (int l70 = 0; (l70 < 2); l70 = (l70 + 1)) fRec57[l70] = 0.0;
	for (int l71 = 0; (l71 < 2); l71 = (l71 + 1)) fRec56[l71] = 0.0;
	for (int l72 = 0; (l72 < 3); l72 = (l72 + 1)) fRec55[l72] = 0.0;
	for (int l73 = 0; (l73 < 4); l73 = (l73 + 1)) fRec54[l73] = 0.0;
	for (int l74 = 0; (l74 < 3); l74 = (l74 + 1)) fRec53[l74] = 0.0;
	for (int l75 = 0; (l75 < 2); l75 = (l75 + 1)) fRec67[l75] = 0.0;
	for (int l76 = 0; (l76 < 3); l76 = (l76 + 1)) fRec66[l76] = 0.0;
	for (int l77 = 0; (l77 < 2); l77 = (l77 + 1)) fVec12[l77] = 0.0;
	for (int l78 = 0; (l78 < 2); l78 = (l78 + 1)) fRec65[l78] = 0.0;
	for (int l79 = 0; (l79 < 3); l79 = (l79 + 1)) fRec64[l79] = 0.0;
	for (int l80 = 0; (l80 < 3); l80 = (l80 + 1)) fRec63[l80] = 0.0;
	for (int l81 = 0; (l81 < 2); l81 = (l81 + 1)) fRec77[l81] = 0.0;
	for (int l82 = 0; (l82 < 2); l82 = (l82 + 1)) fVec13[l82] = 0.0;
	for (int l83 = 0; (l83 < 2); l83 = (l83 + 1)) fRec76[l83] = 0.0;
	for (int l84 = 0; (l84 < 4); l84 = (l84 + 1)) fRec75[l84] = 0.0;
	for (int l85 = 0; (l85 < 3); l85 = (l85 + 1)) fRec74[l85] = 0.0;
	for (int l86 = 0; (l86 < 3); l86 = (l86 + 1)) fRec73[l86] = 0.0;
	for (int l87 = 0; (l87 < 1048576); l87 = (l87 + 1)) fVec14[l87] = 0.0;
	for (int l88 = 0; (l88 < 2); l88 = (l88 + 1)) fVec15[l88] = 0.0;
	for (int l89 = 0; (l89 < 2); l89 = (l89 + 1)) fRec72[l89] = 0.0;
	for (int l90 = 0; (l90 < 2); l90 = (l90 + 1)) fRec71[l90] = 0.0;
	for (int l91 = 0; (l91 < 3); l91 = (l91 + 1)) fRec70[l91] = 0.0;
	for (int l92 = 0; (l92 < 4); l92 = (l92 + 1)) fRec69[l92] = 0.0;
	for (int l93 = 0; (l93 < 3); l93 = (l93 + 1)) fRec68[l93] = 0.0;
	for (int l94 = 0; (l94 < 2); l94 = (l94 + 1)) fRec80[l94] = 0.0;
	for (int l95 = 0; (l95 < 3); l95 = (l95 + 1)) fRec79[l95] = 0.0;
	for (int l96 = 0; (l96 < 3); l96 = (l96 + 1)) fRec78[l96] = 0.0;
	for (int l97 = 0; (l97 < 2); l97 = (l97 + 1)) fRec90[l97] = 0.0;
	for (int l98 = 0; (l98 < 2); l98 = (l98 + 1)) fVec16[l98] = 0.0;
	for (int l99 = 0; (l99 < 2); l99 = (l99 + 1)) fRec89[l99] = 0.0;
	for (int l100 = 0; (l100 < 4); l100 = (l100 + 1)) fRec88[l100] = 0.0;
	for (int l101 = 0; (l101 < 3); l101 = (l101 + 1)) fRec87[l101] = 0.0;
	for (int l102 = 0; (l102 < 3); l102 = (l102 + 1)) fRec86[l102] = 0.0;
	for (int l103 = 0; (l103 < 1048576); l103 = (l103 + 1)) fVec17[l103] = 0.0;
	for (int l104 = 0; (l104 < 2); l104 = (l104 + 1)) fVec18[l104] = 0.0;
	for (int l105 = 0; (l105 < 2); l105 = (l105 + 1)) fRec85[l105] = 0.0;
	for (int l106 = 0; (l106 < 2); l106 = (l106 + 1)) fRec84[l106] = 0.0;
	for (int l107 = 0; (l107 < 3); l107 = (l107 + 1)) fRec83[l107] = 0.0;
	for (int l108 = 0; (l108 < 4); l108 = (l108 + 1)) fRec82[l108] = 0.0;
	for (int l109 = 0; (l109 < 3); l109 = (l109 + 1)) fRec81[l109] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = (2.06740841499587e-08 * fConst0);
	fConst2 = (-5.51308910665569e-07 - fConst1);
	fConst3 = std::tan((20517.741620594938 / fConst0));
	fConst4 = (1.0 / fConst3);
	fConst5 = (1.0 / (((fConst4 + 1.0000000000000004) / fConst3) + 1.0));
	fConst6 = mydsp_faustpower2_f(fConst3);
	fConst7 = (1.0 / fConst6);
	fConst8 = (fConst4 + 1.0);
	fConst9 = (0.0 - (1.0 / (fConst8 * fConst3)));
	fConst10 = (1.0 / fConst8);
	fConst11 = (1.0 - fConst4);
	fConst12 = (((fConst4 + -1.0000000000000004) / fConst3) + 1.0);
	fConst13 = (2.0 * (1.0 - fConst7));
	fConst14 = (0.0 - (2.0 / fConst6));
	fConst15 = std::tan((3769.9111843077517 / fConst0));
	fConst16 = (1.0 / fConst15);
	fConst17 = (fConst16 + 1.0);
	fConst18 = (1.0 / ((fConst17 / fConst15) + 1.0));
	fConst19 = (1.0 - fConst16);
	fConst20 = (1.0 - (fConst19 / fConst15));
	fConst21 = mydsp_faustpower2_f(fConst15);
	fConst22 = (1.0 / fConst21);
	fConst23 = (2.0 * (1.0 - fConst22));
	fConst24 = std::tan((659.73445725385659 / fConst0));
	fConst25 = (1.0 / fConst24);
	fConst26 = (fConst25 + 1.0);
	fConst27 = (1.0 / ((fConst26 / fConst24) + 1.0));
	fConst28 = (1.0 - fConst25);
	fConst29 = (1.0 - (fConst28 / fConst24));
	fConst30 = mydsp_faustpower2_f(fConst24);
	fConst31 = (1.0 / fConst30);
	fConst32 = (2.0 * (1.0 - fConst31));
	fConst33 = std::tan((270.1769682087222 / fConst0));
	fConst34 = (1.0 / fConst33);
	fConst35 = (fConst34 + 1.0);
	fConst36 = (1.0 / ((fConst35 / fConst33) + 1.0));
	fConst37 = (1.0 - fConst34);
	fConst38 = (1.0 - (fConst37 / fConst33));
	fConst39 = mydsp_faustpower2_f(fConst33);
	fConst40 = (1.0 / fConst39);
	fConst41 = (2.0 * (1.0 - fConst40));
	fConst42 = mydsp_faustpower2_f(fConst0);
	fConst43 = (8.2285014683193098e-10 * fConst42);
	fConst44 = (4.1142507341596497e-10 * fConst0);
	fConst45 = ((fConst44 + -2.4906822927323298e-08) * fConst0);
	fConst46 = (8.3284427816995498e-11 * fConst0);
	fConst47 = (fConst46 + -5.0418669893366e-09);
	fConst48 = (7.8378972882444297e-11 * fConst0);
	fConst49 = (3.13458049067171e-09 - fConst48);
	fConst50 = ((fConst44 + 2.4906822927323298e-08) * fConst0);
	fConst51 = (fConst46 + 5.0418669893366e-09);
	fConst52 = (-3.13458049067171e-09 - fConst48);
	fConst53 = (4.1348168299917401e-08 * fConst0);
	fConst54 = (5.51308910665569e-07 - fConst1);
	fConst55 = (8.9973359909861892e-15 * fConst0);
	fConst56 = (((((fConst55 + 2.1539011143829298e-12) * fConst0) + 8.3940734083347397e-11) * fConst0) + 7.6208065915550501e-10);
	fConst57 = (fConst0 / fConst56);
	fConst58 = (2.1232182495002001e-14 * fConst0);
	fConst59 = (((-4.5394197100599002e-11 - fConst58) * fConst0) + -4.6668240054075705e-10);
	fConst60 = (4.3378578048241502e-10 * fConst0);
	fConst61 = (((fConst60 + 1.16144315716444e-08) * fConst0) + 6.9053076645513103e-08);
	fConst62 = (fConst0 / fConst61);
	fConst63 = (2.1646132460019299e-08 * fConst0);
	fConst64 = (-1.3118868157587301e-07 - fConst63);
	fConst65 = (1.0 / std::tan((20420.352248333656 / fConst0)));
	fConst66 = (1.0 / (fConst65 + 1.0));
	fConst67 = (1.0 - fConst65);
	fConst68 = std::tan((125.66370614359172 / fConst0));
	fConst69 = (1.0 / fConst68);
	fConst70 = (1.0 / (((fConst69 + 0.76536686473017945) / fConst68) + 1.0));
	fConst71 = (60.0 * fConst0);
	fConst72 = (10.0 / fConst0);
	fConst73 = (0.0 - fConst72);
	fConst74 = mydsp_faustpower2_f(fConst68);
	fConst75 = (1.0 / fConst74);
	fConst76 = (1.0 / (((fConst69 + 1.8477590650225735) / fConst68) + 1.0));
	fConst77 = (6.73029102377671e-15 * fConst0);
	fConst78 = (1.0 / (((((fConst77 + 1.10493997854221e-10) * fConst0) + 2.3018384314765601e-08) * fConst0) + 6.0159525272688304e-07));
	fConst79 = (1.23938408071082e-08 * fConst0);
	fConst80 = (((-7.13052376187718e-07 - fConst79) * fConst0) + -9.9879581159544601e-06);
	fConst81 = std::tan((471.23889803846896 / fConst0));
	fConst82 = (1.0 / fConst81);
	fConst83 = (fConst82 + 1.0);
	fConst84 = (0.0 - (1.0 / (fConst83 * fConst81)));
	fConst85 = (1.0 / std::tan((23561.944901923449 / fConst0)));
	fConst86 = (1.0 / (fConst85 + 1.0));
	fConst87 = (1.0 - fConst85);
	fConst88 = (1.0 / fConst83);
	fConst89 = (0.25 / fConst81);
	fConst90 = (1.0 - fConst82);
	fConst91 = (2.0190873071330101e-14 * fConst0);
	fConst92 = (((((-1.10493997854221e-10 - fConst91) * fConst0) + 2.3018384314765601e-08) * fConst0) + 1.80478575818065e-06);
	fConst93 = (((((fConst91 + -1.10493997854221e-10) * fConst0) + -2.3018384314765601e-08) * fConst0) + 1.80478575818065e-06);
	fConst94 = (((((1.10493997854221e-10 - fConst77) * fConst0) + -2.3018384314765601e-08) * fConst0) + 6.0159525272688304e-07);
	fConst95 = (((fConst79 + -7.13052376187718e-07) * fConst0) + -2.9963874347863399e-05);
	fConst96 = (((fConst79 + 7.13052376187718e-07) * fConst0) + -2.9963874347863399e-05);
	fConst97 = (((7.13052376187718e-07 - fConst79) * fConst0) + -9.9879581159544601e-06);
	fConst98 = (((fConst69 + -1.8477590650225735) / fConst68) + 1.0);
	fConst99 = (2.0 * (1.0 - fConst75));
	fConst100 = (0.0 - (2.0 / fConst74));
	fConst101 = (((fConst69 + -0.76536686473017945) / fConst68) + 1.0);
	fConst102 = (120.0 * fConst0);
	fConst103 = (180.0 * fConst0);
	fConst104 = (1.0 / fConst61);
	fConst105 = (1.3810615329102599e-07 - (8.6757156096483004e-10 * fConst42));
	fConst106 = (((fConst60 + -1.16144315716444e-08) * fConst0) + 6.9053076645513103e-08);
	fConst107 = (4.3292264920038597e-08 * fConst0);
	fConst108 = (1.3118868157587301e-07 - fConst63);
	fConst109 = (1.0 / fConst56);
	fConst110 = (2.6992007972958601e-14 * fConst0);
	fConst111 = (((((-2.1539011143829298e-12 - fConst110) * fConst0) + 8.3940734083347397e-11) * fConst0) + 2.2862419774665202e-09);
	fConst112 = (((((fConst110 + -2.1539011143829298e-12) * fConst0) + -8.3940734083347397e-11) * fConst0) + 2.2862419774665202e-09);
	fConst113 = (((((2.1539011143829298e-12 - fConst55) * fConst0) + -8.3940734083347397e-11) * fConst0) + 7.6208065915550501e-10);
	fConst114 = (6.3696547485006104e-14 * fConst0);
	fConst115 = (((fConst114 + 4.5394197100599002e-11) * fConst0) + -4.6668240054075705e-10);
	fConst116 = (((4.5394197100599002e-11 - fConst114) * fConst0) + 4.6668240054075705e-10);
	fConst117 = (((fConst58 + -4.5394197100599002e-11) * fConst0) + 4.6668240054075705e-10);
	fConst118 = (1.0 / (((fConst16 + 1.0000000000000004) / fConst15) + 1.0));
	fConst119 = (1.0 / (fConst15 * fConst17));
	fConst120 = (0.0 - fConst119);
	fConst121 = (fConst19 / fConst17);
	fConst122 = (((fConst16 + -1.0000000000000004) / fConst15) + 1.0);
	fConst123 = (0.0 - (2.0 / fConst21));
	fConst124 = (1.0 / (((fConst25 + 1.0000000000000004) / fConst24) + 1.0));
	fConst125 = (1.0 / (fConst24 * fConst26));
	fConst126 = (1.0 / fConst17);
	fConst127 = (0.0 - fConst125);
	fConst128 = (fConst28 / fConst26);
	fConst129 = (((fConst25 + -1.0000000000000004) / fConst24) + 1.0);
	fConst130 = (0.0 - (2.0 / fConst30));
	fConst131 = (1.0 / (((fConst34 + 1.0000000000000004) / fConst33) + 1.0));
	fConst132 = (1.0 / (fConst33 * fConst35));
	fConst133 = (1.0 / fConst26);
	fConst134 = (0.0 - fConst132);
	fConst135 = (fConst37 / fConst35);
	fConst136 = (((fConst34 + -1.0000000000000004) / fConst33) + 1.0);
	fConst137 = (0.0 - (2.0 / fConst39));
	fConst138 = (1.0 / fConst35);
	IOTA = 0;
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void Dsp::mem_alloc()
{
	if (!fVec2) fVec2 = new double[1048576];
	if (!fVec6) fVec6 = new double[1048576];
	if (!fVec10) fVec10 = new double[1048576];
	if (!fVec14) fVec14 = new double[1048576];
	if (!fVec17) fVec17 = new double[1048576];
	mem_allocated = true;
}

void Dsp::mem_free()
{
	mem_allocated = false;
	if (fVec2) { delete fVec2; fVec2 = 0; }
	if (fVec6) { delete fVec6; fVec6 = 0; }
	if (fVec10) { delete fVec10; fVec10 = 0; }
	if (fVec14) { delete fVec14; fVec14 = 0; }
	if (fVec17) { delete fVec17; fVec17 = 0; }
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
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fCheckbox0 (*fCheckbox0_)
#define fVslider3 (*fVslider3_)
#define fVslider4 (*fVslider4_)
#define fCheckbox1 (*fCheckbox1_)
#define fCheckbox2 (*fCheckbox2_)
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider1))) + -1.0));
	double fSlow2 = double(fVslider2);
	double fSlow3 = double(fCheckbox0);
	double fSlow4 = double(fVslider3);
	double fSlow5 = (fConst71 / fSlow4);
	double fSlow6 = double(fVslider4);
	double fSlow7 = (0.25 * fSlow6);
	double fSlow8 = (fConst89 * fSlow6);
	double fSlow9 = double(fCheckbox1);
	double fSlow10 = (fConst102 / fSlow4);
	double fSlow11 = double(fCheckbox2);
	double fSlow12 = (fConst103 / fSlow4);
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec0[0] = (fSlow0 + (0.99299999999999999 * fRec0[1]));
		fRec1[0] = (fSlow1 + (0.99299999999999999 * fRec1[1]));
		double fTemp0 = double(input0[i]);
		fVec0[0] = fTemp0;
		fRec7[0] = ((fConst9 * fVec0[1]) - (fConst10 * ((fConst11 * fRec7[1]) - (fConst4 * fTemp0))));
		fRec6[0] = (fRec7[0] - (fConst5 * ((fConst12 * fRec6[2]) + (fConst13 * fRec6[1]))));
		double fTemp1 = (fConst23 * fRec5[1]);
		fRec5[0] = ((fConst5 * (((fConst7 * fRec6[0]) + (fConst14 * fRec6[1])) + (fConst7 * fRec6[2]))) - (fConst18 * ((fConst20 * fRec5[2]) + fTemp1)));
		double fTemp2 = (fConst32 * fRec4[1]);
		fRec4[0] = ((fRec5[2] + (fConst18 * (fTemp1 + (fConst20 * fRec5[0])))) - (fConst27 * ((fConst29 * fRec4[2]) + fTemp2)));
		double fTemp3 = (fConst41 * fRec3[1]);
		fRec3[0] = ((fRec4[2] + (fConst27 * (fTemp2 + (fConst29 * fRec4[0])))) - (fConst36 * ((fConst38 * fRec3[2]) + fTemp3)));
		double fTemp4 = (((fRec1[0] * ((fConst42 * ((1.5675794576488901e-10 * fRec1[0]) + -1.66568855633991e-10)) + 1.2538321962686799e-07)) + 6.19393104956741e-07) - fConst43);
		double fTemp5 = (fConst45 + ((fRec1[0] * ((fConst0 * (fConst47 + (fConst49 * fRec1[0]))) + 6.2691609813434195e-08)) + 3.0969655247837098e-07));
		double fTemp6 = (fConst50 + ((fRec1[0] * ((fConst0 * (fConst51 + (fConst52 * fRec1[0]))) + 6.2691609813434195e-08)) + 3.0969655247837098e-07));
		fRec2[0] = ((fRec3[2] + (fConst36 * (fTemp3 + (fConst38 * fRec3[0])))) - (((fRec2[1] * fTemp4) + (fRec2[2] * fTemp5)) / fTemp6));
		double fTemp7 = (fConst0 * ((fRec1[0] * (((fConst2 * fRec2[0]) + (fConst53 * fRec2[1])) + (fConst54 * fRec2[2]))) / fTemp6));
		double fTemp8 = (int(signbit(double(fTemp7)))?double(copicat1_negclip(double(fTemp7))):double(copicat1clip(double(fTemp7))));
		double fTemp9 = ((fRec13[1] != 0.0)?(((fRec14[1] > 0.0) & (fRec14[1] < 1.0))?fRec13[1]:0.0):(((fRec14[1] == 0.0) & (fSlow5 != fRec15[1]))?fConst72:(((fRec14[1] == 1.0) & (fSlow5 != fRec16[1]))?fConst73:0.0)));
		fRec13[0] = fTemp9;
		fRec14[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec14[1] + fTemp9)));
		fRec15[0] = (((fRec14[1] >= 1.0) & (fRec16[1] != fSlow5))?fSlow5:fRec15[1]);
		fRec16[0] = (((fRec14[1] <= 0.0) & (fRec15[1] != fSlow5))?fSlow5:fRec16[1]);
		double fTemp10 = (1.0 - fRec14[0]);
		fRec21[0] = (0.0 - (fConst86 * ((fConst87 * fRec21[1]) - (fRec8[1] + fRec8[2]))));
		fVec1[0] = (fSlow7 * fRec21[0]);
		fRec20[0] = ((fConst84 * fVec1[1]) + (fConst88 * ((fSlow8 * fRec21[0]) - (fConst90 * fRec20[1]))));
		fRec19[0] = ((fRec20[0] + fTemp8) - (fConst78 * (((fConst92 * fRec19[1]) + (fConst93 * fRec19[2])) + (fConst94 * fRec19[3]))));
		double fTemp11 = (fConst78 * ((((fConst80 * fRec19[0]) + (fConst95 * fRec19[1])) + (fConst96 * fRec19[2])) + (fConst97 * fRec19[3])));
		fRec18[0] = ((int(signbit(double(fTemp11)))?double(copicatrecord_2_negclip(double(fTemp11))):double(copicatrecord_2clip(double(fTemp11)))) - (fConst76 * ((fConst98 * fRec18[2]) + (fConst99 * fRec18[1]))));
		fRec17[0] = ((fConst76 * (((fConst75 * fRec18[0]) + (fConst100 * fRec18[1])) + (fConst75 * fRec18[2]))) - (fConst70 * ((fConst101 * fRec17[2]) + (fConst99 * fRec17[1]))));
		double fTemp12 = (((fConst75 * fRec17[0]) + (fConst100 * fRec17[1])) + (fConst75 * fRec17[2]));
		fVec2[(IOTA & 1048575)] = fTemp12;
		int iTemp13 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec15[0])));
		int iTemp14 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec16[0])));
		double fTemp15 = ((fRec22[1] != 0.0)?(((fRec23[1] > 0.0) & (fRec23[1] < 1.0))?fRec22[1]:0.0):(((fRec23[1] == 0.0) & (fSlow10 != fRec24[1]))?fConst72:(((fRec23[1] == 1.0) & (fSlow10 != fRec25[1]))?fConst73:0.0)));
		fRec22[0] = fTemp15;
		fRec23[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec23[1] + fTemp15)));
		fRec24[0] = (((fRec23[1] >= 1.0) & (fRec25[1] != fSlow10))?fSlow10:fRec24[1]);
		fRec25[0] = (((fRec23[1] <= 0.0) & (fRec24[1] != fSlow10))?fSlow10:fRec25[1]);
		double fTemp16 = (1.0 - fRec23[0]);
		int iTemp17 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec24[0])));
		int iTemp18 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec25[0])));
		double fTemp19 = ((fRec26[1] != 0.0)?(((fRec27[1] > 0.0) & (fRec27[1] < 1.0))?fRec26[1]:0.0):(((fRec27[1] == 0.0) & (fSlow12 != fRec28[1]))?fConst72:(((fRec27[1] == 1.0) & (fSlow12 != fRec29[1]))?fConst73:0.0)));
		fRec26[0] = fTemp19;
		fRec27[0] = std::max<double>(0.0, std::min<double>(1.0, (fRec27[1] + fTemp19)));
		fRec28[0] = (((fRec27[1] >= 1.0) & (fRec29[1] != fSlow12))?fSlow12:fRec28[1]);
		fRec29[0] = (((fRec27[1] <= 0.0) & (fRec28[1] != fSlow12))?fSlow12:fRec29[1]);
		double fTemp20 = (1.0 - fRec27[0]);
		int iTemp21 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec28[0])));
		int iTemp22 = int(std::min<double>(524288.0, std::max<double>(0.0, fRec29[0])));
		double fTemp23 = (((fSlow3 * ((fTemp10 * fVec2[((IOTA - iTemp13) & 1048575)]) + (fRec14[0] * fVec2[((IOTA - iTemp14) & 1048575)]))) + (fSlow9 * ((fTemp16 * fVec2[((IOTA - iTemp17) & 1048575)]) + (fRec23[0] * fVec2[((IOTA - iTemp18) & 1048575)])))) + (fSlow11 * ((fTemp20 * fVec2[((IOTA - iTemp21) & 1048575)]) + (fRec27[0] * fVec2[((IOTA - iTemp22) & 1048575)]))));
		fVec3[0] = fTemp23;
		fRec12[0] = (0.0 - (fConst66 * ((fConst67 * fRec12[1]) - (fConst70 * (fTemp23 + fVec3[1])))));
		fRec11[0] = ((fRec12[0] + (0.995 * fRec11[1])) - fRec12[1]);
		fRec10[0] = (fRec11[0] - (fConst104 * ((fConst105 * fRec10[1]) + (fConst106 * fRec10[2]))));
		double fTemp24 = (fConst62 * (((fConst64 * fRec10[0]) + (fConst107 * fRec10[1])) + (fConst108 * fRec10[2])));
		fRec9[0] = ((int(signbit(double(fTemp24)))?double(copicatreplay1_negclip(double(fTemp24))):double(copicatreplay1clip(double(fTemp24)))) - (fConst109 * (((fConst111 * fRec9[1]) + (fConst112 * fRec9[2])) + (fConst113 * fRec9[3]))));
		double fTemp25 = (fConst57 * ((((fConst59 * fRec9[0]) + (fConst115 * fRec9[1])) + (fConst116 * fRec9[2])) + (fConst117 * fRec9[3])));
		fRec8[0] = (int(signbit(double(fTemp25)))?double(copicatreplay2_negclip(double(fTemp25))):double(copicatreplay2clip(double(fTemp25))));
		fRec36[0] = (0.0 - (fConst10 * ((fConst11 * fRec36[1]) - (fVec0[1] + fTemp0))));
		fRec35[0] = (fRec36[0] - (fConst5 * ((fConst12 * fRec35[2]) + (fConst13 * fRec35[1]))));
		double fTemp26 = (fRec35[2] + (fRec35[0] + (2.0 * fRec35[1])));
		fVec4[0] = fTemp26;
		fRec34[0] = ((fConst5 * ((fConst119 * fTemp26) + (fConst120 * fVec4[1]))) - (fConst121 * fRec34[1]));
		fRec33[0] = (fRec34[0] - (fConst118 * ((fConst122 * fRec33[2]) + (fConst23 * fRec33[1]))));
		double fTemp27 = (fConst32 * fRec32[1]);
		fRec32[0] = ((fConst118 * (((fConst22 * fRec33[0]) + (fConst123 * fRec33[1])) + (fConst22 * fRec33[2]))) - (fConst27 * ((fConst29 * fRec32[2]) + fTemp27)));
		double fTemp28 = (fConst41 * fRec31[1]);
		fRec31[0] = ((fRec32[2] + (fConst27 * (fTemp27 + (fConst29 * fRec32[0])))) - (fConst36 * ((fConst38 * fRec31[2]) + fTemp28)));
		fRec30[0] = ((fRec31[2] + (fConst36 * (fTemp28 + (fConst38 * fRec31[0])))) - (((fTemp4 * fRec30[1]) + (fTemp5 * fRec30[2])) / fTemp6));
		double fTemp29 = (fConst0 * ((fRec1[0] * (((fConst2 * fRec30[0]) + (fConst53 * fRec30[1])) + (fConst54 * fRec30[2]))) / fTemp6));
		double fTemp30 = (int(signbit(double(fTemp29)))?double(copicat1_negclip(double(fTemp29))):double(copicat1clip(double(fTemp29))));
		fRec46[0] = (0.0 - (fConst86 * ((fConst87 * fRec46[1]) - (fRec37[1] + fRec37[2]))));
		fVec5[0] = (fSlow7 * fRec46[0]);
		fRec45[0] = ((fConst84 * fVec5[1]) + (fConst88 * ((fSlow8 * fRec46[0]) - (fConst90 * fRec45[1]))));
		fRec44[0] = ((fRec45[0] + fTemp30) - (fConst78 * (((fConst92 * fRec44[1]) + (fConst93 * fRec44[2])) + (fConst94 * fRec44[3]))));
		double fTemp31 = (fConst78 * ((((fConst80 * fRec44[0]) + (fConst95 * fRec44[1])) + (fConst96 * fRec44[2])) + (fConst97 * fRec44[3])));
		fRec43[0] = ((int(signbit(double(fTemp31)))?double(copicatrecord_2_negclip(double(fTemp31))):double(copicatrecord_2clip(double(fTemp31)))) - (fConst76 * ((fConst98 * fRec43[2]) + (fConst99 * fRec43[1]))));
		fRec42[0] = ((fConst76 * (((fConst75 * fRec43[0]) + (fConst100 * fRec43[1])) + (fConst75 * fRec43[2]))) - (fConst70 * ((fConst101 * fRec42[2]) + (fConst99 * fRec42[1]))));
		double fTemp32 = (((fConst75 * fRec42[0]) + (fConst100 * fRec42[1])) + (fConst75 * fRec42[2]));
		fVec6[(IOTA & 1048575)] = fTemp32;
		double fTemp33 = (((fSlow3 * ((fTemp10 * fVec6[((IOTA - iTemp13) & 1048575)]) + (fRec14[0] * fVec6[((IOTA - iTemp14) & 1048575)]))) + (fSlow9 * ((fTemp16 * fVec6[((IOTA - iTemp17) & 1048575)]) + (fRec23[0] * fVec6[((IOTA - iTemp18) & 1048575)])))) + (fSlow11 * ((fTemp20 * fVec6[((IOTA - iTemp21) & 1048575)]) + (fRec27[0] * fVec6[((IOTA - iTemp22) & 1048575)]))));
		fVec7[0] = fTemp33;
		fRec41[0] = (0.0 - (fConst66 * ((fConst67 * fRec41[1]) - (fConst70 * (fTemp33 + fVec7[1])))));
		fRec40[0] = ((fRec41[0] + (0.995 * fRec40[1])) - fRec41[1]);
		fRec39[0] = (fRec40[0] - (fConst104 * ((fConst105 * fRec39[1]) + (fConst106 * fRec39[2]))));
		double fTemp34 = (fConst62 * (((fConst64 * fRec39[0]) + (fConst107 * fRec39[1])) + (fConst108 * fRec39[2])));
		fRec38[0] = ((int(signbit(double(fTemp34)))?double(copicatreplay1_negclip(double(fTemp34))):double(copicatreplay1clip(double(fTemp34)))) - (fConst109 * (((fConst111 * fRec38[1]) + (fConst112 * fRec38[2])) + (fConst113 * fRec38[3]))));
		double fTemp35 = (fConst57 * ((((fConst59 * fRec38[0]) + (fConst115 * fRec38[1])) + (fConst116 * fRec38[2])) + (fConst117 * fRec38[3])));
		fRec37[0] = (int(signbit(double(fTemp35)))?double(copicatreplay2_negclip(double(fTemp35))):double(copicatreplay2clip(double(fTemp35))));
		fRec52[0] = (0.0 - (fConst126 * ((fConst19 * fRec52[1]) - (fConst5 * (fTemp26 + fVec4[1])))));
		fRec51[0] = (fRec52[0] - (fConst118 * ((fConst122 * fRec51[2]) + (fConst23 * fRec51[1]))));
		double fTemp36 = (fRec51[2] + (fRec51[0] + (2.0 * fRec51[1])));
		fVec8[0] = fTemp36;
		fRec50[0] = ((fConst118 * ((fConst125 * fTemp36) + (fConst127 * fVec8[1]))) - (fConst128 * fRec50[1]));
		fRec49[0] = (fRec50[0] - (fConst124 * ((fConst129 * fRec49[2]) + (fConst32 * fRec49[1]))));
		double fTemp37 = (fConst41 * fRec48[1]);
		fRec48[0] = ((fConst124 * (((fConst31 * fRec49[0]) + (fConst130 * fRec49[1])) + (fConst31 * fRec49[2]))) - (fConst36 * ((fConst38 * fRec48[2]) + fTemp37)));
		fRec47[0] = ((fRec48[2] + (fConst36 * (fTemp37 + (fConst38 * fRec48[0])))) - (((fTemp4 * fRec47[1]) + (fTemp5 * fRec47[2])) / fTemp6));
		double fTemp38 = (fConst0 * ((fRec1[0] * (((fConst2 * fRec47[0]) + (fConst53 * fRec47[1])) + (fConst54 * fRec47[2]))) / fTemp6));
		double fTemp39 = (int(signbit(double(fTemp38)))?double(copicat1_negclip(double(fTemp38))):double(copicat1clip(double(fTemp38))));
		fRec62[0] = (0.0 - (fConst86 * ((fConst87 * fRec62[1]) - (fRec53[1] + fRec53[2]))));
		fVec9[0] = (fSlow7 * fRec62[0]);
		fRec61[0] = ((fConst84 * fVec9[1]) + (fConst88 * ((fSlow8 * fRec62[0]) - (fConst90 * fRec61[1]))));
		fRec60[0] = ((fRec61[0] + fTemp39) - (fConst78 * (((fConst92 * fRec60[1]) + (fConst93 * fRec60[2])) + (fConst94 * fRec60[3]))));
		double fTemp40 = (fConst78 * ((((fConst80 * fRec60[0]) + (fConst95 * fRec60[1])) + (fConst96 * fRec60[2])) + (fConst97 * fRec60[3])));
		fRec59[0] = ((int(signbit(double(fTemp40)))?double(copicatrecord_2_negclip(double(fTemp40))):double(copicatrecord_2clip(double(fTemp40)))) - (fConst76 * ((fConst98 * fRec59[2]) + (fConst99 * fRec59[1]))));
		fRec58[0] = ((fConst76 * (((fConst75 * fRec59[0]) + (fConst100 * fRec59[1])) + (fConst75 * fRec59[2]))) - (fConst70 * ((fConst101 * fRec58[2]) + (fConst99 * fRec58[1]))));
		double fTemp41 = (((fConst75 * fRec58[0]) + (fConst100 * fRec58[1])) + (fConst75 * fRec58[2]));
		fVec10[(IOTA & 1048575)] = fTemp41;
		double fTemp42 = (((fSlow3 * ((fTemp10 * fVec10[((IOTA - iTemp13) & 1048575)]) + (fRec14[0] * fVec10[((IOTA - iTemp14) & 1048575)]))) + (fSlow9 * ((fTemp16 * fVec10[((IOTA - iTemp17) & 1048575)]) + (fRec23[0] * fVec10[((IOTA - iTemp18) & 1048575)])))) + (fSlow11 * ((fTemp20 * fVec10[((IOTA - iTemp21) & 1048575)]) + (fRec27[0] * fVec10[((IOTA - iTemp22) & 1048575)]))));
		fVec11[0] = fTemp42;
		fRec57[0] = (0.0 - (fConst66 * ((fConst67 * fRec57[1]) - (fConst70 * (fTemp42 + fVec11[1])))));
		fRec56[0] = ((fRec57[0] + (0.995 * fRec56[1])) - fRec57[1]);
		fRec55[0] = (fRec56[0] - (fConst104 * ((fConst105 * fRec55[1]) + (fConst106 * fRec55[2]))));
		double fTemp43 = (fConst62 * (((fConst64 * fRec55[0]) + (fConst107 * fRec55[1])) + (fConst108 * fRec55[2])));
		fRec54[0] = ((int(signbit(double(fTemp43)))?double(copicatreplay1_negclip(double(fTemp43))):double(copicatreplay1clip(double(fTemp43)))) - (fConst109 * (((fConst111 * fRec54[1]) + (fConst112 * fRec54[2])) + (fConst113 * fRec54[3]))));
		double fTemp44 = (fConst57 * ((((fConst59 * fRec54[0]) + (fConst115 * fRec54[1])) + (fConst116 * fRec54[2])) + (fConst117 * fRec54[3])));
		fRec53[0] = (int(signbit(double(fTemp44)))?double(copicatreplay2_negclip(double(fTemp44))):double(copicatreplay2clip(double(fTemp44))));
		fRec67[0] = (0.0 - (fConst133 * ((fConst28 * fRec67[1]) - (fConst118 * (fTemp36 + fVec8[1])))));
		fRec66[0] = (fRec67[0] - (fConst124 * ((fConst129 * fRec66[2]) + (fConst32 * fRec66[1]))));
		double fTemp45 = (fRec66[2] + (fRec66[0] + (2.0 * fRec66[1])));
		fVec12[0] = fTemp45;
		fRec65[0] = ((fConst124 * ((fConst132 * fTemp45) + (fConst134 * fVec12[1]))) - (fConst135 * fRec65[1]));
		fRec64[0] = (fRec65[0] - (fConst131 * ((fConst136 * fRec64[2]) + (fConst41 * fRec64[1]))));
		fRec63[0] = ((fConst131 * (((fConst40 * fRec64[0]) + (fConst137 * fRec64[1])) + (fConst40 * fRec64[2]))) - (((fTemp4 * fRec63[1]) + (fTemp5 * fRec63[2])) / fTemp6));
		double fTemp46 = (fConst0 * ((fRec1[0] * (((fConst2 * fRec63[0]) + (fConst53 * fRec63[1])) + (fConst54 * fRec63[2]))) / fTemp6));
		double fTemp47 = (int(signbit(double(fTemp46)))?double(copicat1_negclip(double(fTemp46))):double(copicat1clip(double(fTemp46))));
		fRec77[0] = (0.0 - (fConst86 * ((fConst87 * fRec77[1]) - (fRec68[1] + fRec68[2]))));
		fVec13[0] = (fSlow7 * fRec77[0]);
		fRec76[0] = ((fConst84 * fVec13[1]) + (fConst88 * ((fSlow8 * fRec77[0]) - (fConst90 * fRec76[1]))));
		fRec75[0] = ((fRec76[0] + fTemp47) - (fConst78 * (((fConst92 * fRec75[1]) + (fConst93 * fRec75[2])) + (fConst94 * fRec75[3]))));
		double fTemp48 = (fConst78 * ((((fConst80 * fRec75[0]) + (fConst95 * fRec75[1])) + (fConst96 * fRec75[2])) + (fConst97 * fRec75[3])));
		fRec74[0] = ((int(signbit(double(fTemp48)))?double(copicatrecord_2_negclip(double(fTemp48))):double(copicatrecord_2clip(double(fTemp48)))) - (fConst76 * ((fConst98 * fRec74[2]) + (fConst99 * fRec74[1]))));
		fRec73[0] = ((fConst76 * (((fConst75 * fRec74[0]) + (fConst100 * fRec74[1])) + (fConst75 * fRec74[2]))) - (fConst70 * ((fConst101 * fRec73[2]) + (fConst99 * fRec73[1]))));
		double fTemp49 = (((fConst75 * fRec73[0]) + (fConst100 * fRec73[1])) + (fConst75 * fRec73[2]));
		fVec14[(IOTA & 1048575)] = fTemp49;
		double fTemp50 = (((fSlow3 * ((fTemp10 * fVec14[((IOTA - iTemp13) & 1048575)]) + (fRec14[0] * fVec14[((IOTA - iTemp14) & 1048575)]))) + (fSlow9 * ((fTemp16 * fVec14[((IOTA - iTemp17) & 1048575)]) + (fRec23[0] * fVec14[((IOTA - iTemp18) & 1048575)])))) + (fSlow11 * ((fTemp20 * fVec14[((IOTA - iTemp21) & 1048575)]) + (fRec27[0] * fVec14[((IOTA - iTemp22) & 1048575)]))));
		fVec15[0] = fTemp50;
		fRec72[0] = (0.0 - (fConst66 * ((fConst67 * fRec72[1]) - (fConst70 * (fTemp50 + fVec15[1])))));
		fRec71[0] = ((fRec72[0] + (0.995 * fRec71[1])) - fRec72[1]);
		fRec70[0] = (fRec71[0] - (fConst104 * ((fConst105 * fRec70[1]) + (fConst106 * fRec70[2]))));
		double fTemp51 = (fConst62 * (((fConst64 * fRec70[0]) + (fConst107 * fRec70[1])) + (fConst108 * fRec70[2])));
		fRec69[0] = ((int(signbit(double(fTemp51)))?double(copicatreplay1_negclip(double(fTemp51))):double(copicatreplay1clip(double(fTemp51)))) - (fConst109 * (((fConst111 * fRec69[1]) + (fConst112 * fRec69[2])) + (fConst113 * fRec69[3]))));
		double fTemp52 = (fConst57 * ((((fConst59 * fRec69[0]) + (fConst115 * fRec69[1])) + (fConst116 * fRec69[2])) + (fConst117 * fRec69[3])));
		fRec68[0] = (int(signbit(double(fTemp52)))?double(copicatreplay2_negclip(double(fTemp52))):double(copicatreplay2clip(double(fTemp52))));
		fRec80[0] = (0.0 - (fConst138 * ((fConst37 * fRec80[1]) - (fConst124 * (fTemp45 + fVec12[1])))));
		fRec79[0] = (fRec80[0] - (fConst131 * ((fConst136 * fRec79[2]) + (fConst41 * fRec79[1]))));
		fRec78[0] = ((fConst131 * (fRec79[2] + (fRec79[0] + (2.0 * fRec79[1])))) - (((fTemp4 * fRec78[1]) + (fTemp5 * fRec78[2])) / fTemp6));
		double fTemp53 = (fConst0 * ((fRec1[0] * (((fConst2 * fRec78[0]) + (fConst53 * fRec78[1])) + (fConst54 * fRec78[2]))) / fTemp6));
		double fTemp54 = (int(signbit(double(fTemp53)))?double(copicat1_negclip(double(fTemp53))):double(copicat1clip(double(fTemp53))));
		fRec90[0] = (0.0 - (fConst86 * ((fConst87 * fRec90[1]) - (fRec81[1] + fRec81[2]))));
		fVec16[0] = (fSlow7 * fRec90[0]);
		fRec89[0] = ((fConst84 * fVec16[1]) + (fConst88 * ((fSlow8 * fRec90[0]) - (fConst90 * fRec89[1]))));
		fRec88[0] = ((fRec89[0] + fTemp54) - (fConst78 * (((fConst92 * fRec88[1]) + (fConst93 * fRec88[2])) + (fConst94 * fRec88[3]))));
		double fTemp55 = (fConst78 * ((((fConst80 * fRec88[0]) + (fConst95 * fRec88[1])) + (fConst96 * fRec88[2])) + (fConst97 * fRec88[3])));
		fRec87[0] = ((int(signbit(double(fTemp55)))?double(copicatrecord_2_negclip(double(fTemp55))):double(copicatrecord_2clip(double(fTemp55)))) - (fConst76 * ((fConst98 * fRec87[2]) + (fConst99 * fRec87[1]))));
		fRec86[0] = ((fConst76 * (((fConst75 * fRec87[0]) + (fConst100 * fRec87[1])) + (fConst75 * fRec87[2]))) - (fConst70 * ((fConst101 * fRec86[2]) + (fConst99 * fRec86[1]))));
		double fTemp56 = (((fConst75 * fRec86[0]) + (fConst100 * fRec86[1])) + (fConst75 * fRec86[2]));
		fVec17[(IOTA & 1048575)] = fTemp56;
		double fTemp57 = (((fSlow3 * ((fTemp10 * fVec17[((IOTA - iTemp13) & 1048575)]) + (fRec14[0] * fVec17[((IOTA - iTemp14) & 1048575)]))) + (fSlow9 * ((fTemp16 * fVec17[((IOTA - iTemp17) & 1048575)]) + (fRec23[0] * fVec17[((IOTA - iTemp18) & 1048575)])))) + (fSlow11 * ((fTemp20 * fVec17[((IOTA - iTemp21) & 1048575)]) + (fRec27[0] * fVec17[((IOTA - iTemp22) & 1048575)]))));
		fVec18[0] = fTemp57;
		fRec85[0] = (0.0 - (fConst66 * ((fConst67 * fRec85[1]) - (fConst70 * (fTemp57 + fVec18[1])))));
		fRec84[0] = ((fRec85[0] + (0.995 * fRec84[1])) - fRec85[1]);
		fRec83[0] = (fRec84[0] - (fConst104 * ((fConst105 * fRec83[1]) + (fConst106 * fRec83[2]))));
		double fTemp58 = (fConst62 * (((fConst64 * fRec83[0]) + (fConst107 * fRec83[1])) + (fConst108 * fRec83[2])));
		fRec82[0] = ((int(signbit(double(fTemp58)))?double(copicatreplay1_negclip(double(fTemp58))):double(copicatreplay1clip(double(fTemp58)))) - (fConst109 * (((fConst111 * fRec82[1]) + (fConst112 * fRec82[2])) + (fConst113 * fRec82[3]))));
		double fTemp59 = (fConst57 * ((((fConst59 * fRec82[0]) + (fConst115 * fRec82[1])) + (fConst116 * fRec82[2])) + (fConst117 * fRec82[3])));
		fRec81[0] = (int(signbit(double(fTemp59)))?double(copicatreplay2_negclip(double(fTemp59))):double(copicatreplay2clip(double(fTemp59))));
		output0[i] = FAUSTFLOAT((fRec0[0] * (((((fTemp8 + (fSlow2 * fRec8[0])) + (fTemp30 + (fSlow2 * fRec37[0]))) + (fTemp39 + (fSlow2 * fRec53[0]))) + (fTemp47 + (fSlow2 * fRec68[0]))) + (fTemp54 + (fSlow2 * fRec81[0])))));
		fRec0[1] = fRec0[0];
		fRec1[1] = fRec1[0];
		fVec0[1] = fVec0[0];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[2] = fRec5[1];
		fRec5[1] = fRec5[0];
		fRec4[2] = fRec4[1];
		fRec4[1] = fRec4[0];
		fRec3[2] = fRec3[1];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		fRec15[1] = fRec15[0];
		fRec16[1] = fRec16[0];
		fRec21[1] = fRec21[0];
		fVec1[1] = fVec1[0];
		fRec20[1] = fRec20[0];
		for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
			fRec19[j0] = fRec19[(j0 - 1)];
		}
		fRec18[2] = fRec18[1];
		fRec18[1] = fRec18[0];
		fRec17[2] = fRec17[1];
		fRec17[1] = fRec17[0];
		IOTA = (IOTA + 1);
		fRec22[1] = fRec22[0];
		fRec23[1] = fRec23[0];
		fRec24[1] = fRec24[0];
		fRec25[1] = fRec25[0];
		fRec26[1] = fRec26[0];
		fRec27[1] = fRec27[0];
		fRec28[1] = fRec28[0];
		fRec29[1] = fRec29[0];
		fVec3[1] = fVec3[0];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec10[2] = fRec10[1];
		fRec10[1] = fRec10[0];
		for (int j1 = 3; (j1 > 0); j1 = (j1 - 1)) {
			fRec9[j1] = fRec9[(j1 - 1)];
		}
		fRec8[2] = fRec8[1];
		fRec8[1] = fRec8[0];
		fRec36[1] = fRec36[0];
		fRec35[2] = fRec35[1];
		fRec35[1] = fRec35[0];
		fVec4[1] = fVec4[0];
		fRec34[1] = fRec34[0];
		fRec33[2] = fRec33[1];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fRec31[2] = fRec31[1];
		fRec31[1] = fRec31[0];
		fRec30[2] = fRec30[1];
		fRec30[1] = fRec30[0];
		fRec46[1] = fRec46[0];
		fVec5[1] = fVec5[0];
		fRec45[1] = fRec45[0];
		for (int j2 = 3; (j2 > 0); j2 = (j2 - 1)) {
			fRec44[j2] = fRec44[(j2 - 1)];
		}
		fRec43[2] = fRec43[1];
		fRec43[1] = fRec43[0];
		fRec42[2] = fRec42[1];
		fRec42[1] = fRec42[0];
		fVec7[1] = fVec7[0];
		fRec41[1] = fRec41[0];
		fRec40[1] = fRec40[0];
		fRec39[2] = fRec39[1];
		fRec39[1] = fRec39[0];
		for (int j3 = 3; (j3 > 0); j3 = (j3 - 1)) {
			fRec38[j3] = fRec38[(j3 - 1)];
		}
		fRec37[2] = fRec37[1];
		fRec37[1] = fRec37[0];
		fRec52[1] = fRec52[0];
		fRec51[2] = fRec51[1];
		fRec51[1] = fRec51[0];
		fVec8[1] = fVec8[0];
		fRec50[1] = fRec50[0];
		fRec49[2] = fRec49[1];
		fRec49[1] = fRec49[0];
		fRec48[2] = fRec48[1];
		fRec48[1] = fRec48[0];
		fRec47[2] = fRec47[1];
		fRec47[1] = fRec47[0];
		fRec62[1] = fRec62[0];
		fVec9[1] = fVec9[0];
		fRec61[1] = fRec61[0];
		for (int j4 = 3; (j4 > 0); j4 = (j4 - 1)) {
			fRec60[j4] = fRec60[(j4 - 1)];
		}
		fRec59[2] = fRec59[1];
		fRec59[1] = fRec59[0];
		fRec58[2] = fRec58[1];
		fRec58[1] = fRec58[0];
		fVec11[1] = fVec11[0];
		fRec57[1] = fRec57[0];
		fRec56[1] = fRec56[0];
		fRec55[2] = fRec55[1];
		fRec55[1] = fRec55[0];
		for (int j5 = 3; (j5 > 0); j5 = (j5 - 1)) {
			fRec54[j5] = fRec54[(j5 - 1)];
		}
		fRec53[2] = fRec53[1];
		fRec53[1] = fRec53[0];
		fRec67[1] = fRec67[0];
		fRec66[2] = fRec66[1];
		fRec66[1] = fRec66[0];
		fVec12[1] = fVec12[0];
		fRec65[1] = fRec65[0];
		fRec64[2] = fRec64[1];
		fRec64[1] = fRec64[0];
		fRec63[2] = fRec63[1];
		fRec63[1] = fRec63[0];
		fRec77[1] = fRec77[0];
		fVec13[1] = fVec13[0];
		fRec76[1] = fRec76[0];
		for (int j6 = 3; (j6 > 0); j6 = (j6 - 1)) {
			fRec75[j6] = fRec75[(j6 - 1)];
		}
		fRec74[2] = fRec74[1];
		fRec74[1] = fRec74[0];
		fRec73[2] = fRec73[1];
		fRec73[1] = fRec73[0];
		fVec15[1] = fVec15[0];
		fRec72[1] = fRec72[0];
		fRec71[1] = fRec71[0];
		fRec70[2] = fRec70[1];
		fRec70[1] = fRec70[0];
		for (int j7 = 3; (j7 > 0); j7 = (j7 - 1)) {
			fRec69[j7] = fRec69[(j7 - 1)];
		}
		fRec68[2] = fRec68[1];
		fRec68[1] = fRec68[0];
		fRec80[1] = fRec80[0];
		fRec79[2] = fRec79[1];
		fRec79[1] = fRec79[0];
		fRec78[2] = fRec78[1];
		fRec78[1] = fRec78[0];
		fRec90[1] = fRec90[0];
		fVec16[1] = fVec16[0];
		fRec89[1] = fRec89[0];
		for (int j8 = 3; (j8 > 0); j8 = (j8 - 1)) {
			fRec88[j8] = fRec88[(j8 - 1)];
		}
		fRec87[2] = fRec87[1];
		fRec87[1] = fRec87[0];
		fRec86[2] = fRec86[1];
		fRec86[1] = fRec86[0];
		fVec18[1] = fVec18[0];
		fRec85[1] = fRec85[0];
		fRec84[1] = fRec84[0];
		fRec83[2] = fRec83[1];
		fRec83[1] = fRec83[0];
		for (int j9 = 3; (j9 > 0); j9 = (j9 - 1)) {
			fRec82[j9] = fRec82[(j9 - 1)];
		}
		fRec81[2] = fRec81[1];
		fRec81[1] = fRec81[0];
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
#undef fCheckbox0
#undef fVslider3
#undef fVslider4
#undef fCheckbox1
#undef fCheckbox2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case SUSTAIN: 
		fVslider4_ = (float*)data; // , 0.0, 0.0, 0.94999999999999996, 0.01 
		break;
	case SWELL: 
		fVslider2_ = (float*)data; // , 0.0, 0.0, 1.0, 0.01 
		break;
	case INPUT: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case OUTPUT: 
		fVslider0_ = (float*)data; // , 1.0, 0.0, 4.0, 0.01 
		break;
	case BPM: 
		fVslider3_ = (float*)data; // , 120.0, 24.0, 360.0, 0.10000000000000001 
		break;
	case HEAD1: 
		fCheckbox0_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case HEAD2: 
		fCheckbox1_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case HEAD3: 
		fCheckbox2_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
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
   SUSTAIN, 
   SWELL, 
   INPUT, 
   OUTPUT, 
   BPM, 
   HEAD1, 
   HEAD2, 
   HEAD3, 
} PortIndex;
*/

} // end namespace gxechocat
