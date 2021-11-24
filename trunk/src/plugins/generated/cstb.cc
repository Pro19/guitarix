// generated from file '../src/plugins/cstb.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"

#include "trany.h"
#include <string.h>

namespace pluginlib {
namespace cstb {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fConst0;
	double fConst1;
	FAUSTFLOAT fVslider0;
	double fRec1[2];
	double fConst3;
	FAUSTFLOAT fVslider1;
	double fRec2[2];
	double fConst5;
	double fConst7;
	double fConst9;
	double fConst11;
	double fConst13;
	double fConst15;
	double fConst17;
	double fConst19;
	double fConst21;
	double fConst23;
	double fConst25;
	double fConst27;
	double fConst29;
	double fConst31;
	double fConst33;
	double fConst35;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
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
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst57;
	double fConst59;
	double fConst61;
	double fConst63;
	double fConst65;
	double fConst67;
	double fConst69;
	double fConst71;
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
	double fRec0[6];
	double fConst84;
	double fConst86;
	double fConst88;
	double fConst90;
	double fConst92;
	FAUSTFLOAT fVslider2;
	double fRec3[2];
	double fConst94;
	double fConst96;
	double fConst98;
	double fConst100;
	double fConst102;
	double fConst104;
	double fConst106;
	double fConst108;
	double fConst110;
	double fConst112;
	double fConst114;
	double fConst116;
	double fConst118;
	double fConst120;
	double fConst122;
	double fConst124;
	double fConst126;
	double fConst128;
	double fConst130;
	double fConst132;
	double fConst134;
	double fConst136;
	double fConst138;
	double fConst140;
	double fConst142;
	double fConst144;
	double fConst146;
	double fConst148;
	double fConst150;
	double fConst152;
	double fConst154;
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fConst164;
	double fConst165;
	double fConst166;
	double fConst167;
	double fConst168;
	double fConst169;
	double fConst170;
	double fConst171;
	double fConst172;
	double fConst173;
	double fConst174;
	double fConst175;
	double fConst176;
	double fConst177;
	double fConst178;
	double fConst179;
	double fConst180;
	double fConst181;
	double fConst182;
	double fConst183;
	double fConst184;
	double fConst185;
	double fConst186;
	double fConst187;
	double fConst188;
	double fConst189;
	double fConst190;


	gx_resample::FixedRateResampler smpCl;
	double fConstCl4;
	double fVecCl0[2];
	double fRecCl7[2];
	double fRecCl6[3];
	double fConstCl6;
	double fConstCl7;
	double fRecCl8[2];
	double fRecCl5[3];
	double fConstCl8;
	double fConstCl9;
	double fRecCl4[2];
	double fRecCl3[2];
	double fRecCl2[3];
	double fRecCl9[2];
	double fRecCl1[3];
	double fRecCl0[2];

	FAUSTFLOAT fsliderdw0;
	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
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
	id = "cstbt1";
	name = N_("Colorsound Tone Blender");
	groups = 0;
	description = N_("Colorsound Tone Blender"); // description (tooltip)
	category = N_("Fuzz");       // category
	shortname = N_("CS Tone");     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec1[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec2[l1] = 0.0;
	for (int l2 = 0; (l2 < 6); l2 = (l2 + 1)) fRec0[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fRec3[l3] = 0.0;

	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fVecCl0[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRecCl7[l1] = 0.0;
	for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) fRecCl6[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fRecCl8[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRecCl5[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRecCl4[l5] = 0.0;
	for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) fRecCl3[l6] = 0.0;
	for (int l7 = 0; (l7 < 3); l7 = (l7 + 1)) fRecCl2[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRecCl9[l8] = 0.0;
	for (int l9 = 0; (l9 < 3); l9 = (l9 + 1)) fRecCl1[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRecCl0[l10] = 0.0;

}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = mydsp_faustpower3_f(fConst0);
	double fConst2 = (5.5261401523874901e-21 * fConst0);
	fConst3 = ((fConst0 * ((fConst0 * (-2.5527347879257901e-17 - fConst2)) + 1.22792404260186e-14)) + 8.0717824945831201e-13);
	double fConst4 = (8.6576195720737299e-23 * fConst0);
	fConst5 = ((fConst0 * ((fConst0 * ((fConst0 * (-7.1987121019507201e-19 - fConst4)) + -1.15424860004575e-16)) + 2.5291585149693801e-15)) + 1.4782748638191099e-14);
	double fConst6 = (8.5004399001908102e-23 * fConst0);
	fConst7 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst6 + 7.0717410866786505e-19)) + 1.1498972821887099e-16)) + -2.52121869652107e-15)) + -1.4737253345379099e-14);
	double fConst8 = (5.5940778691599401e-21 * fConst0);
	fConst9 = ((fConst0 * ((fConst0 * (fConst8 + 2.6419935855110401e-17)) + -1.21896224477789e-14)) + -7.8631641692505802e-14);
	double fConst10 = (8.7640553283505698e-23 * fConst0);
	fConst11 = ((fConst0 * ((fConst0 * (fConst10 + 7.4504219111411202e-19)) + 1.14582451009122e-16)) + -2.4637914396985098e-16);
	double fConst12 = (8.6049433080768503e-23 * fConst0);
	fConst13 = ((fConst0 * ((fConst0 * (-7.3189268461366796e-19 - fConst12)) + -1.14222007971933e-16)) + 2.4562088908965202e-16);
	double fConst14 = (2.3623839907591202e-21 * fConst0);
	fConst15 = ((fConst0 * ((fConst0 * (-1.20886112608973e-17 - fConst14)) + 5.8172210626613099e-15)) + 3.5812307260105601e-13);
	double fConst16 = (3.70106825218929e-23 * fConst0);
	fConst17 = ((fConst0 * ((fConst0 * ((fConst0 * (-3.4089883755730399e-19 - fConst16)) + -5.4681877989016302e-17)) + 1.12211896081664e-15)) + 6.5103225002593601e-15);
	double fConst18 = (3.6338751064691999e-23 * fConst0);
	fConst19 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst18 + 3.3486891267682501e-19)) + 5.4478138784818498e-17)) + -1.1185967898344499e-15)) + -6.4902863733049697e-15);
	double fConst20 = (3.6840934349249901e-21 * fConst0);
	fConst21 = ((fConst0 * ((fConst0 * (fConst20 + -5.1054695758515803e-17)) + -2.4558480852037201e-14)) + 5.3811883297220797e-13);
	double fConst22 = (1.73152391441475e-22 * fConst0);
	fConst23 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst22 + 4.7991414013004804e-19)) + -2.3084972000914999e-16)) + -5.0583170299387602e-15)) + 9.85516575879406e-15);
	double fConst24 = (1.7000879800381599e-22 * fConst0);
	fConst25 = ((fConst0 * ((fConst0 * ((fConst0 * (-4.7144940577857699e-19 - fConst24)) + 2.2997945643774198e-16)) + 5.0424373930421502e-15)) + -9.8248355635860904e-15);
	double fConst26 = (3.7293852461066202e-21 * fConst0);
	fConst27 = ((fConst0 * ((fConst0 * (5.2839871710220698e-17 - fConst26)) + 2.4379244895557899e-14)) + -5.2421094461670499e-14);
	double fConst28 = (1.75281106567011e-22 * fConst0);
	fConst29 = ((fConst0 * ((fConst0 * (-4.9669479407607503e-19 - fConst28)) + 2.2916490201824399e-16)) + 4.9275828793970304e-16);
	double fConst30 = (1.7209886616153701e-22 * fConst0);
	fConst31 = ((fConst0 * ((fConst0 * (fConst30 + 4.8792845640911203e-19)) + -2.2844401594386501e-16)) + -4.9124177817930405e-16);
	double fConst32 = (1.57492266050608e-21 * fConst0);
	fConst33 = ((fConst0 * ((fConst0 * (fConst32 + -2.41772225217946e-17)) + -1.1634442125322599e-14)) + 2.3874871506736999e-13);
	double fConst34 = (7.4021365043785695e-23 * fConst0);
	fConst35 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst34 + 2.2726589170486902e-19)) + -1.09363755978033e-16)) + -2.24423792163328e-15)) + 4.3402150001728996e-15);
	double fConst36 = (7.2677502129383998e-23 * fConst0);
	fConst37 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.2324594178455e-19 - fConst36)) + 1.08956277569637e-16)) + 2.2371935796688998e-15)) + -4.3268575822033097e-15);
	fConst38 = ((fConst0 * ((fConst0 * (fConst20 + 5.1054695758515803e-17)) + -2.4558480852037201e-14)) + -5.3811883297220797e-13);
	fConst39 = ((fConst0 * ((fConst0 * ((fConst0 * (4.7991414013004804e-19 - fConst22)) + 2.3084972000914999e-16)) + -5.0583170299387602e-15)) + -9.85516575879406e-15);
	fConst40 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst24 + -4.7144940577857699e-19)) + -2.2997945643774198e-16)) + 5.0424373930421502e-15)) + 9.8248355635860904e-15);
	fConst41 = ((fConst0 * ((fConst0 * (-5.2839871710220698e-17 - fConst26)) + 2.4379244895557899e-14)) + 5.2421094461670499e-14);
	fConst42 = ((fConst0 * ((fConst0 * (fConst28 + -4.9669479407607503e-19)) + -2.2916490201824399e-16)) + 4.9275828793970304e-16);
	fConst43 = ((fConst0 * ((fConst0 * (4.8792845640911203e-19 - fConst30)) + 2.2844401594386501e-16)) + -4.9124177817930405e-16);
	fConst44 = ((fConst0 * ((fConst0 * (fConst32 + 2.41772225217946e-17)) + -1.1634442125322599e-14)) + -2.3874871506736999e-13);
	fConst45 = ((fConst0 * ((fConst0 * ((fConst0 * (2.2726589170486902e-19 - fConst34)) + 1.09363755978033e-16)) + -2.24423792163328e-15)) + -4.3402150001728996e-15);
	fConst46 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst36 + -2.2324594178455e-19)) + -1.08956277569637e-16)) + 2.2371935796688998e-15)) + 4.3268575822033097e-15);
	fConst47 = ((fConst0 * ((fConst0 * (2.5527347879257901e-17 - fConst2)) + 1.22792404260186e-14)) + -8.0717824945831201e-13);
	fConst48 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst4 + -7.1987121019507201e-19)) + 1.15424860004575e-16)) + 2.5291585149693801e-15)) + -1.4782748638191099e-14);
	fConst49 = ((fConst0 * ((fConst0 * ((fConst0 * (7.0717410866786505e-19 - fConst6)) + -1.1498972821887099e-16)) + -2.52121869652107e-15)) + 1.4737253345379099e-14);
	fConst50 = ((fConst0 * ((fConst0 * (fConst8 + -2.6419935855110401e-17)) + -1.21896224477789e-14)) + 7.8631641692505802e-14);
	fConst51 = ((fConst0 * ((fConst0 * (7.4504219111411202e-19 - fConst10)) + -1.14582451009122e-16)) + -2.4637914396985098e-16);
	fConst52 = ((fConst0 * ((fConst0 * (fConst12 + -7.3189268461366796e-19)) + 1.14222007971933e-16)) + 2.4562088908965202e-16);
	fConst53 = ((fConst0 * ((fConst0 * (1.20886112608973e-17 - fConst14)) + 5.8172210626613099e-15)) + -3.5812307260105601e-13);
	fConst54 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst16 + -3.4089883755730399e-19)) + 5.4681877989016302e-17)) + 1.12211896081664e-15)) + -6.5103225002593601e-15);
	fConst55 = ((fConst0 * ((fConst0 * ((fConst0 * (3.3486891267682501e-19 - fConst18)) + -5.4478138784818498e-17)) + -1.1185967898344499e-15)) + 6.4902863733049697e-15);
	double fConst56 = (1.8420467174624999e-21 * fConst0);
	fConst57 = ((fConst0 * ((fConst0 * (fConst56 + -2.5527347879257901e-17)) + 1.22792404260186e-14)) + -2.6905941648610399e-13);
	double fConst58 = (1.73152391441475e-23 * fConst0);
	fConst59 = ((fConst0 * ((fConst0 * ((fConst0 * (2.3995707006502402e-19 - fConst58)) + -1.15424860004575e-16)) + 2.5291585149693801e-15)) + -4.92758287939703e-15);
	double fConst60 = (1.7000879800381601e-23 * fConst0);
	fConst61 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst60 + -2.3572470288928801e-19)) + 1.1498972821887099e-16)) + -2.52121869652107e-15)) + 4.9124177817930499e-15);
	double fConst62 = (1.8646926230533101e-21 * fConst0);
	fConst63 = ((fConst0 * ((fConst0 * (2.6419935855110401e-17 - fConst62)) + -1.21896224477789e-14)) + 2.62105472308353e-14);
	double fConst64 = (1.7528110656701099e-23 * fConst0);
	fConst65 = ((fConst0 * ((fConst0 * (fConst64 + -2.4834739703803699e-19)) + 1.14582451009122e-16)) + -2.4637914396985098e-16);
	double fConst66 = (1.7209886616153699e-23 * fConst0);
	fConst67 = ((fConst0 * ((fConst0 * (2.4396422820455602e-19 - fConst66)) + -1.14222007971933e-16)) + 2.4562088908965202e-16);
	double fConst68 = (7.8746133025304002e-22 * fConst0);
	fConst69 = ((fConst0 * ((fConst0 * (fConst68 + -1.20886112608973e-17)) + 5.8172210626613099e-15)) + -1.1937435753368499e-13);
	double fConst70 = (7.4021365043785704e-24 * fConst0);
	fConst71 = ((fConst0 * ((fConst0 * ((fConst0 * (1.1363294585243499e-19 - fConst70)) + -5.4681877989016302e-17)) + 1.12211896081664e-15)) + -2.1701075000864498e-15);
	double fConst72 = (7.2677502129384007e-24 * fConst0);
	fConst73 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst72 + -1.11622970892275e-19)) + 5.4478138784818498e-17)) + -1.1185967898344499e-15)) + 2.16342879110166e-15);
	fConst74 = ((fConst0 * ((fConst0 * (fConst56 + 2.5527347879257901e-17)) + 1.22792404260186e-14)) + 2.6905941648610399e-13);
	fConst75 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst58 + 2.3995707006502402e-19)) + 1.15424860004575e-16)) + 2.5291585149693801e-15)) + 4.92758287939703e-15);
	fConst76 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.3572470288928801e-19 - fConst60)) + -1.1498972821887099e-16)) + -2.52121869652107e-15)) + -4.9124177817930499e-15);
	fConst77 = ((fConst0 * ((fConst0 * (-2.6419935855110401e-17 - fConst62)) + -1.21896224477789e-14)) + -2.62105472308353e-14);
	fConst78 = ((fConst0 * ((fConst0 * (-2.4834739703803699e-19 - fConst64)) + -1.14582451009122e-16)) + -2.4637914396985098e-16);
	fConst79 = ((fConst0 * ((fConst0 * (fConst66 + 2.4396422820455602e-19)) + 1.14222007971933e-16)) + 2.4562088908965202e-16);
	fConst80 = ((fConst0 * ((fConst0 * (fConst68 + 1.20886112608973e-17)) + 5.8172210626613099e-15)) + 1.1937435753368499e-13);
	fConst81 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst70 + 1.1363294585243499e-19)) + 5.4681877989016302e-17)) + 1.12211896081664e-15)) + 2.1701075000864498e-15);
	fConst82 = ((fConst0 * ((fConst0 * ((fConst0 * (-1.11622970892275e-19 - fConst72)) + -5.4478138784818498e-17)) + -1.1185967898344499e-15)) + -2.16342879110166e-15);
	double fConst83 = (9.67524227740541e-23 * fConst0);
	fConst84 = (-1.5210205934795299e-20 - fConst83);
	double fConst85 = (8.1815288646820299e-23 * fConst0);
	fConst86 = (fConst85 + -3.32042567560148e-19);
	double fConst87 = (7.6906371328011103e-25 * fConst0);
	fConst88 = (fConst87 + -3.1212001350654001e-21);
	double fConst89 = (7.6566240032016093e-27 * fConst0);
	fConst90 = (3.1073961051954699e-23 - fConst89);
	double fConst91 = (7.6566240032016101e-24 * fConst0);
	fConst92 = (3.1073961051954699e-20 - fConst91);
	double fConst93 = (7.6906371328011099e-22 * fConst0);
	fConst94 = (fConst93 + -3.12120013506539e-18);
	double fConst95 = (8.1815288646820299e-20 * fConst0);
	fConst96 = (fConst95 + -3.3204256756014798e-16);
	double fConst97 = (9.0947277407610906e-25 * fConst0);
	fConst98 = (-1.4297593578707601e-22 - fConst97);
	double fConst99 = (9.0545047855004207e-27 * fConst0);
	fConst100 = (fConst99 + 1.4234360078679399e-24);
	double fConst101 = (9.0545047855004299e-24 * fConst0);
	fConst102 = (fConst101 + 1.4234360078679401e-21);
	double fConst103 = (9.0947277407610903e-22 * fConst0);
	fConst104 = (-1.4297593578707601e-19 - fConst103);
	double fConst105 = (9.6752422774054198e-20 * fConst0);
	fConst106 = (-1.5210205934795299e-17 - fConst105);
	double fConst107 = (2.9025726832216199e-22 * fConst0);
	fConst108 = (fConst107 + 1.5210205934795299e-20);
	double fConst109 = (2.45445865940461e-22 * fConst0);
	fConst110 = (3.32042567560148e-19 - fConst109);
	double fConst111 = (3.8453185664005602e-24 * fConst0);
	fConst112 = (9.3636004051961901e-21 - fConst111);
	double fConst113 = (3.82831200160081e-26 * fConst0);
	fConst114 = (fConst113 + -9.3221883155864004e-23);
	double fConst115 = (3.82831200160081e-23 * fConst0);
	fConst116 = (fConst115 + -9.3221883155864005e-20);
	double fConst117 = (3.8453185664005598e-21 * fConst0);
	fConst118 = (9.3636004051961899e-18 - fConst117);
	double fConst119 = (2.4544586594046098e-19 * fConst0);
	fConst120 = (3.3204256756014798e-16 - fConst119);
	double fConst121 = (4.5473638703805502e-24 * fConst0);
	fConst122 = (fConst121 + 4.28927807361227e-22);
	double fConst123 = (4.5272523927502102e-26 * fConst0);
	fConst124 = (-4.2703080236038204e-24 - fConst123);
	double fConst125 = (4.5272523927502101e-23 * fConst0);
	fConst126 = (-4.2703080236038201e-21 - fConst125);
	double fConst127 = (4.5473638703805497e-21 * fConst0);
	fConst128 = (fConst127 + 4.2892780736122702e-19);
	double fConst129 = (2.9025726832216199e-19 * fConst0);
	fConst130 = (fConst129 + 1.5210205934795299e-17);
	double fConst131 = (1.9350484554810801e-22 * fConst0);
	fConst132 = (3.0420411869590502e-20 - fConst131);
	double fConst133 = (1.63630577293641e-22 * fConst0);
	fConst134 = (fConst133 + 6.6408513512029697e-19);
	double fConst135 = (7.6906371328011101e-24 * fConst0);
	fConst136 = (fConst135 + -6.2424002701307897e-21);
	double fConst137 = (7.6566240032016096e-26 * fConst0);
	fConst138 = (6.2147922103909399e-23 - fConst137);
	double fConst139 = (7.6566240032016095e-23 * fConst0);
	fConst140 = (6.2147922103909397e-20 - fConst139);
	double fConst141 = (7.6906371328011105e-21 * fConst0);
	fConst142 = (fConst141 + -6.2424002701307899e-18);
	double fConst143 = (1.6363057729364101e-19 * fConst0);
	fConst144 = (fConst143 + 6.6408513512029705e-16);
	double fConst145 = (9.0947277407610902e-24 * fConst0);
	fConst146 = (-2.8595187157415099e-22 - fConst145);
	double fConst147 = (9.0545047855004204e-26 * fConst0);
	fConst148 = (fConst147 + 2.8468720157358799e-24);
	double fConst149 = (9.0545047855004202e-23 * fConst0);
	fConst150 = (fConst149 + 2.8468720157358802e-21);
	double fConst151 = (9.0947277407610903e-21 * fConst0);
	fConst152 = (-2.8595187157415101e-19 - fConst151);
	double fConst153 = (1.9350484554810801e-19 * fConst0);
	fConst154 = (3.04204118695905e-17 - fConst153);
	fConst155 = (-3.0420411869590502e-20 - fConst131);
	fConst156 = (fConst133 + -6.6408513512029697e-19);
	fConst157 = (-6.2424002701307897e-21 - fConst135);
	fConst158 = (fConst137 + 6.2147922103909399e-23);
	fConst159 = (fConst139 + 6.2147922103909397e-20);
	fConst160 = (-6.2424002701307899e-18 - fConst141);
	fConst161 = (fConst143 + -6.6408513512029705e-16);
	fConst162 = (fConst145 + -2.8595187157415099e-22);
	fConst163 = (2.8468720157358799e-24 - fConst147);
	fConst164 = (2.8468720157358802e-21 - fConst149);
	fConst165 = (fConst151 + -2.8595187157415101e-19);
	fConst166 = (-3.04204118695905e-17 - fConst153);
	fConst167 = (fConst107 + -1.5210205934795299e-20);
	fConst168 = (-3.32042567560148e-19 - fConst109);
	fConst169 = (fConst111 + 9.3636004051961901e-21);
	fConst170 = (-9.3221883155864004e-23 - fConst113);
	fConst171 = (-9.3221883155864005e-20 - fConst115);
	fConst172 = (fConst117 + 9.3636004051961899e-18);
	fConst173 = (-3.3204256756014798e-16 - fConst119);
	fConst174 = (4.28927807361227e-22 - fConst121);
	fConst175 = (fConst123 + -4.2703080236038204e-24);
	fConst176 = (fConst125 + -4.2703080236038201e-21);
	fConst177 = (4.2892780736122702e-19 - fConst127);
	fConst178 = (fConst129 + -1.5210205934795299e-17);
	fConst179 = (1.5210205934795299e-20 - fConst83);
	fConst180 = (fConst85 + 3.32042567560148e-19);
	fConst181 = (-3.1212001350654001e-21 - fConst87);
	fConst182 = (fConst89 + 3.1073961051954699e-23);
	fConst183 = (fConst91 + 3.1073961051954699e-20);
	fConst184 = (-3.12120013506539e-18 - fConst93);
	fConst185 = (fConst95 + 3.3204256756014798e-16);
	fConst186 = (fConst97 + -1.4297593578707601e-22);
	fConst187 = (1.4234360078679399e-24 - fConst99);
	fConst188 = (1.4234360078679401e-21 - fConst101);
	fConst189 = (fConst103 + -1.4297593578707601e-19);
	fConst190 = (1.5210205934795299e-17 - fConst105);

	sample_rate = 96000;
	smpCl.setup(fSampleRate, sample_rate);
	fSampleRate = sample_rate;
	double fConstCl0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	double fConstCl1 = std::tan((97.389372261283583 / fConstCl0));
	double fConstCl2 = (1.0 / fConstCl1);
	double fConstCl3 = (fConstCl2 + 1.0);
	fConstCl4 = (1.0 / (fConstCl1 * fConstCl3));
	double fConstCl5 = (1.0 / std::tan((270.1769682087222 / fConstCl0)));
	fConstCl6 = (1.0 / (fConstCl5 + 1.0));
	fConstCl7 = (1.0 - fConstCl5);
	fConstCl8 = (0.0 - fConstCl4);
	fConstCl9 = ((1.0 - fConstCl2) / fConstCl3);

	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double 	fSlowdw0 = (0.01 * fsliderdw0);
	double 	fSlowdw1 = (1 - fSlowdw0);
	FAUSTFLOAT 	dryinput[count];
	memcpy(&dryinput, input0, count * sizeof(float));

	double fSlow0 = (0.0070000000000000062 * double(fVslider0));
	double fSlow1 = (0.0070000000000000062 * double(fVslider1));
	double fSlow2 = (0.0070000000000000062 * double(fVslider2));
	for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
		fRec1[0] = (fSlow0 + (0.99299999999999999 * fRec1[1]));
		fRec2[0] = (fSlow1 + (0.99299999999999999 * fRec2[1]));
		double fTemp0 = (((fRec1[0] * ((fConst0 * (fConst74 + ((fRec2[0] * (fConst75 + (fConst76 * fRec2[0]))) + (fRec1[0] * (fConst77 + (fConst0 * (fRec2[0] * (fConst78 + (fConst79 * fRec2[0]))))))))) + 5.2421094461670503e-13)) + (fConst0 * (fConst80 + (fRec2[0] * (fConst81 + (fConst82 * fRec2[0])))))) + 2.30862500009197e-13);
		fRec0[0] = (double(input0[i0]) - ((((((fRec0[1] * (((fRec1[0] * ((fConst0 * (fConst3 + ((fRec2[0] * (fConst5 + (fConst7 * fRec2[0]))) + (fRec1[0] * (fConst9 + (fConst0 * (fRec2[0] * (fConst11 + (fConst13 * fRec2[0]))))))))) + 2.6210547230835299e-12)) + (fConst0 * (fConst15 + (fRec2[0] * (fConst17 + (fConst19 * fRec2[0])))))) + 1.15431250004598e-12)) + (fRec0[2] * (((fRec1[0] * ((fConst0 * (fConst21 + ((fRec2[0] * (fConst23 + (fConst25 * fRec2[0]))) + (fRec1[0] * (fConst27 + (fConst0 * (fRec2[0] * (fConst29 + (fConst31 * fRec2[0]))))))))) + 5.2421094461670501e-12)) + (fConst0 * (fConst33 + (fRec2[0] * (fConst35 + (fConst37 * fRec2[0])))))) + 2.3086250000919701e-12))) + (fRec0[3] * (((fRec1[0] * ((fConst0 * (fConst38 + ((fRec2[0] * (fConst39 + (fConst40 * fRec2[0]))) + (fRec1[0] * (fConst41 + (fConst0 * (fRec2[0] * (fConst42 + (fConst43 * fRec2[0]))))))))) + 5.2421094461670501e-12)) + (fConst0 * (fConst44 + (fRec2[0] * (fConst45 + (fConst46 * fRec2[0])))))) + 2.3086250000919701e-12))) + (fRec0[4] * (((fRec1[0] * ((fConst0 * (fConst47 + ((fRec2[0] * (fConst48 + (fConst49 * fRec2[0]))) + (fRec1[0] * (fConst50 + (fConst0 * (fRec2[0] * (fConst51 + (fConst52 * fRec2[0]))))))))) + 2.6210547230835299e-12)) + (fConst0 * (fConst53 + (fRec2[0] * (fConst54 + (fConst55 * fRec2[0])))))) + 1.15431250004598e-12))) + (fRec0[5] * (((fRec1[0] * ((fConst0 * (fConst57 + ((fRec2[0] * (fConst59 + (fConst61 * fRec2[0]))) + (fRec1[0] * (fConst63 + (fConst0 * (fRec2[0] * (fConst65 + (fConst67 * fRec2[0]))))))))) + 5.2421094461670503e-13)) + (fConst0 * (fConst69 + (fRec2[0] * (fConst71 + (fConst73 * fRec2[0])))))) + 2.30862500009197e-13))) / fTemp0));
		fRec3[0] = (fSlow2 + (0.99299999999999999 * fRec3[1]));
		output0[i0] = FAUSTFLOAT((fConst1 * (((((((fRec0[0] * (fConst84 + (((fRec1[0] * (fConst86 + ((fConst0 * (fRec2[0] * (fConst88 + ((fRec2[0] * (fConst90 + (fConst92 * fRec3[0]))) + (fConst94 * fRec3[0]))))) + (fConst96 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst98 + ((fRec2[0] * (fConst100 + (fConst102 * fRec3[0]))) + (fConst104 * fRec3[0])))))) + (fConst106 * fRec3[0])))) + (fRec0[1] * (fConst108 + (((fRec1[0] * (fConst110 + ((fConst0 * (fRec2[0] * (fConst112 + ((fRec2[0] * (fConst114 + (fConst116 * fRec3[0]))) + (fConst118 * fRec3[0]))))) + (fConst120 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst122 + ((fRec2[0] * (fConst124 + (fConst126 * fRec3[0]))) + (fConst128 * fRec3[0])))))) + (fConst130 * fRec3[0]))))) + (fRec0[2] * (fConst132 + (((fRec1[0] * (fConst134 + ((fConst0 * (fRec2[0] * (fConst136 + ((fRec2[0] * (fConst138 + (fConst140 * fRec3[0]))) + (fConst142 * fRec3[0]))))) + (fConst144 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst146 + ((fRec2[0] * (fConst148 + (fConst150 * fRec3[0]))) + (fConst152 * fRec3[0])))))) + (fConst154 * fRec3[0]))))) + (fRec0[3] * (fConst155 + (((fRec1[0] * (fConst156 + ((fConst0 * (fRec2[0] * (fConst157 + ((fRec2[0] * (fConst158 + (fConst159 * fRec3[0]))) + (fConst160 * fRec3[0]))))) + (fConst161 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst162 + ((fRec2[0] * (fConst163 + (fConst164 * fRec3[0]))) + (fConst165 * fRec3[0])))))) + (fConst166 * fRec3[0]))))) + (fRec0[4] * (fConst167 + (((fRec1[0] * (fConst168 + ((fConst0 * (fRec2[0] * (fConst169 + ((fRec2[0] * (fConst170 + (fConst171 * fRec3[0]))) + (fConst172 * fRec3[0]))))) + (fConst173 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst174 + ((fRec2[0] * (fConst175 + (fConst176 * fRec3[0]))) + (fConst177 * fRec3[0])))))) + (fConst178 * fRec3[0]))))) + (fRec0[5] * (fConst179 + (((fRec1[0] * (fConst180 + ((fConst0 * (fRec2[0] * (fConst181 + ((fRec2[0] * (fConst182 + (fConst183 * fRec3[0]))) + (fConst184 * fRec3[0]))))) + (fConst185 * fRec3[0])))) + (fConst0 * (fRec2[0] * (fConst186 + ((fRec2[0] * (fConst187 + (fConst188 * fRec3[0]))) + (fConst189 * fRec3[0])))))) + (fConst190 * fRec3[0]))))) / fTemp0)));
		fRec1[1] = fRec1[0];
		fRec2[1] = fRec2[0];
		for (int j0 = 5; (j0 > 0); j0 = (j0 - 1)) {
			fRec0[j0] = fRec0[(j0 - 1)];
		}
		fRec3[1] = fRec3[0];
	}

	FAUSTFLOAT bufCl[smpCl.max_out_count(count)];
	int ReCount = smpCl.up(count, output0, bufCl);
	for (int i0 = 0; (i0 < ReCount); i0 = (i0 + 1)) {
		double fTemp0 = double(bufCl[i0]);
		fVecCl0[0] = fTemp0;
		fRecCl7[0] = ((0.93028479253239138 * (fTemp0 + fVecCl0[1])) - (0.86056958506478287 * fRecCl7[1]));
		fRecCl6[0] = (fRecCl7[0] - ((1.8405051250752198 * fRecCl6[1]) + (0.86129424393186271 * fRecCl6[2])));
		fRecCl8[0] = (fConstCl6 * ((0.027 * (fRecCl5[1] + fRecCl5[2])) - (fConstCl7 * fRecCl8[1])));
		fRecCl5[0] = (double(Ftrany(int(TRANY_TABLE_7199P_68k), double((((0.92544984225177063 * (fRecCl6[0] + fRecCl6[2])) + (fRecCl8[0] + (1.8508996845035413 * fRecCl6[1]))) + -3.5719810000000001)))) + -117.70440740740739);
		fRecCl4[0] = ((0.025000000000000001 * ((fConstCl4 * fRecCl5[0]) + (fConstCl8 * fRecCl5[1]))) - (fConstCl9 * fRecCl4[1]));
		fRecCl3[0] = ((0.93028479253239138 * (fRecCl4[0] + fRecCl4[1])) - (0.86056958506478287 * fRecCl3[1]));
		fRecCl2[0] = (fRecCl3[0] - ((1.8405051250752198 * fRecCl2[1]) + (0.86129424393186271 * fRecCl2[2])));
		fRecCl9[0] = (fConstCl6 * ((0.027 * (fRecCl1[1] + fRecCl1[2])) - (fConstCl7 * fRecCl9[1])));
		fRecCl1[0] = (double(Ftrany(int(TRANY_TABLE_7199P_68k), double((((0.92544984225177063 * (fRecCl2[0] + fRecCl2[2])) + (fRecCl9[0] + (1.8508996845035413 * fRecCl2[1]))) + -3.5719810000000001)))) + -117.70440740740739);
		fRecCl0[0] = ((0.025000000000000001 * ((fConstCl4 * fRecCl1[0]) + (fConstCl8 * fRecCl1[1]))) - (fConstCl9 * fRecCl0[1]));
		bufCl[i0] = FAUSTFLOAT(fRecCl0[0]);
		fVecCl0[1] = fVecCl0[0];
		fRecCl7[1] = fRecCl7[0];
		fRecCl6[2] = fRecCl6[1];
		fRecCl6[1] = fRecCl6[0];
		fRecCl8[1] = fRecCl8[0];
		fRecCl5[2] = fRecCl5[1];
		fRecCl5[1] = fRecCl5[0];
		fRecCl4[1] = fRecCl4[0];
		fRecCl3[1] = fRecCl3[0];
		fRecCl2[2] = fRecCl2[1];
		fRecCl2[1] = fRecCl2[0];
		fRecCl9[1] = fRecCl9[0];
		fRecCl1[2] = fRecCl1[1];
		fRecCl1[1] = fRecCl1[0];
		fRecCl0[1] = fRecCl0[0];
	}
	smpCl.down(bufCl, output0);

	for (int i=0; i<count; i++) {
		output0[i] = ((fSlowdw1 * (double)dryinput[i]) + (fSlowdw0 * (double)output0[i]));
	}

}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerFloatVar("cstbt1.wet_dry",N_("Dry/Wet"),"S",N_("percentage of processed signal in output signal"),&fsliderdw0, 1e+02, 0.0, 1e+02, 1.0, 0);
	reg.registerFloatVar("cstbt1.Attack",N_("Attack"),"S","",&fVslider1, 0.5, 0.0, 1.0, 0.01, 0);
	reg.registerFloatVar("cstbt1.Level",N_("Level"),"S","",&fVslider2, 0.5, 0.0, 1.0, 0.01, 0);
	reg.registerFloatVar("cstbt1.Tone",N_("Tone"),"S","",&fVslider0, 0.5, 0.0, 1.0, 0.01, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<!-- Generated with glade 3.22.1 -->\n\
<interface>\n\
  <requires lib=\"gtk+\" version=\"3.20\"/>\n\
  <requires lib=\"gxwidgets\" version=\"0.0\"/>\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <placeholder/>\n\
    </child>\n\
    <child>\n\
      <object class=\"GtkBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <property name=\"orientation\">vertical</property>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Attack</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Tone</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox4\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label3:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.Level</property>\n\
                        <property name=\"label_ref\">label3:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">2</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox5\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label4:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob4\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">cstbt1.wet_dry</property>\n\
                        <property name=\"label_ref\">label4:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">3</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">cstbt1.Level</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label\" translatable=\"yes\">Level</property>\n\
                <property name=\"xalign\">0</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("cstbt1" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Level"), "Level");
b.closeBox();
b.openHorizontalBox("");

    b.create_small_rackknobr(PARAM("Level"), "Level");

    b.create_small_rackknobr(PARAM("Tone"), "Tone");

    b.create_small_rackknobr(PARAM("Attack"), "Attack");
    b.create_small_rackknobr(PARAM("wet_dry"), "dry/wet");
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace cstb
} // end namespace pluginlib
