/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 * Copyright (C) 2011 Pete Shorthose
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
 * ---------------------------------------------------------------------------
 *
 *    This is the gx_head GUI main class
 *
 * ----------------------------------------------------------------------------
 */

template <class Param>
class UiToggleAction: public Gtk::ToggleAction, public gx_ui::GxUiItem {
private:
    Param& param;
    gx_ui::GxUI& ui;
    virtual void on_toggled();
    virtual void reflectZone();
    virtual bool hasChanged();
protected:
    UiToggleAction(
	gx_ui::GxUI& ui_, Param& para, const Glib::ustring& name, const Glib::ustring& icon_name,
	const Glib::ustring& label=Glib::ustring(), const Glib::ustring& tooltip=Glib::ustring(),
	bool is_active=false);
    ~UiToggleAction();
public:
    static Glib::RefPtr<UiToggleAction> create(
	gx_ui::GxUI& ui, Param& para, const Glib::ustring& name, const Glib::ustring& label=Glib::ustring(),
	const Glib::ustring& tooltip=Glib::ustring(), bool is_active=false) {
	return Glib::RefPtr<UiToggleAction>(
	    new UiToggleAction(ui, para, name, Glib::ustring(), label, tooltip, is_active));
    }
};

typedef UiToggleAction<gx_engine::SwitchParameter> UiSwitchToggleAction;
typedef UiToggleAction<gx_engine::BoolParameter> UiBoolToggleAction;

template <class Param>
class UiRadioAction: public Gtk::RadioAction, public gx_ui::GxUiItem {
private:
    Param& param;
    gx_ui::GxUI& ui;
    virtual void on_changed(const Glib::RefPtr<Gtk::RadioAction>& act);
    virtual void reflectZone();
    virtual bool hasChanged();
protected:
    UiRadioAction(
	gx_ui::GxUI& ui_, Param& para, Gtk::RadioButtonGroup& group, const Glib::ustring& name, const Glib::ustring& icon_name,
	const Glib::ustring& label=Glib::ustring(), const Glib::ustring& tooltip=Glib::ustring());
    ~UiRadioAction();
public:
    static Glib::RefPtr<UiRadioAction> create(
	gx_ui::GxUI& ui, Param& para, Gtk::RadioButtonGroup& group, const Glib::ustring& name,
	const Glib::ustring& label=Glib::ustring(), const Glib::ustring& tooltip=Glib::ustring()) {
	return Glib::RefPtr<UiRadioAction>(
	    new UiRadioAction(ui, para, group, name, Glib::ustring(), label, tooltip));
    }
};

typedef UiRadioAction<gx_engine::SwitchParameter> UiSwitchRadioAction;

/****************************************************************
 ** class Liveplay
 */

class Liveplay: public sigc::trackable {
private:
    gx_ui::GxUI ui;
    Glib::RefPtr<gx_gui::GxBuilder> bld;
    gx_engine::GxEngine &engine;
    gx_preset::GxSettings& gx_settings;
    bool use_composite;
    Gtk::Adjustment brightness_adj;
    Gtk::Adjustment background_adj;
    sigc::connection key_timeout;
    Glib::ustring last_bank_key;
    sigc::connection midi_conn;
    Gtk::Window *window;
    //
    Gtk::Image *bypass_image;
    Gtk::Image *mute_image;
    Gtk::Label *liveplay_preset;
    Gtk::Widget *liveplay_canvas;
    Gxw::HSlider *brightness_slider;
    Gtk::Box *brightness_box;
    Gxw::HSlider *background_slider;
    Gtk::ToggleButton *liveplay_exit;
    Gtk::Table *midictrl_table;
    Gxw::RackTuner *tuner;
private:
    void add_midi_elements();
    bool on_delete(GdkEventAny *ev);
    void on_brightness_changed();
    void on_background_changed();
    bool transparent_expose(GdkEventExpose *event);
    bool window_expose_event(GdkEventExpose* event);
    void on_realize();
    void on_engine_state_change(gx_engine::GxEngineState state);
    void on_selection_changed();
    static bool do_action(
	GtkAccelGroup *accel_group, GObject *acceleratable,
	guint keyval, GdkModifierType modifier, GtkAction* act);
    static bool on_keyboard_preset_select(
	GtkAccelGroup *accel_group, GObject *acceleratable,
	guint keyval, GdkModifierType modifier, Liveplay& self);
    void process_bank_key(int idx);
    void process_preset_key(int idx);
    void display_empty(const Glib::ustring& s);
    static bool on_keyboard_toggle_mute(
	GtkAccelGroup *accel_group, GObject *acceleratable,
	guint keyval, GdkModifierType modifier, Liveplay& self);
    static bool on_keyboard_arrows(
	GtkAccelGroup *accel_group, GObject *acceleratable,
	guint keyval, GdkModifierType modifier, Liveplay& self);
public:
    Liveplay(const gx_system::CmdlineOptions& options, gx_engine::GxEngine& engine, gx_preset::GxSettings& gx_settings,
	     const std::string& fname, Glib::RefPtr<Gtk::ActionGroup>& actiongroup, Glib::RefPtr<UiBoolToggleAction>& livetuner_action);
    ~Liveplay();
    void on_live_play(Glib::RefPtr<Gtk::ToggleAction> act);
    void display_tuner(bool v);
    Gxw::RackTuner& get_tuner() { return *tuner; }
};


/****************************************************************
 ** class PluginUI
 */

class MainWindow;
class RackBox;

enum PluginType {
    PLUGIN_TYPE_MONO,
    PLUGIN_TYPE_STEREO,
};

class PluginUI: public gx_ui::GxUiItem {
private:
    virtual void reflectZone();
    virtual bool hasChanged();
    Gtk::UIManager::ui_merge_id merge_id;
    Glib::RefPtr<Gtk::ToggleAction> action;
    void on_action_toggled();
public:
    gx_engine::Plugin *plugin;
    Glib::ustring fname;
    Glib::ustring tooltip;
    const char *shortname;

    // data for ToolPalette entry
    Glib::RefPtr<Gdk::Pixbuf> icon;
    Gtk::ToolItemGroup *group;
    Gtk::ToolItem *toolitem;

    MainWindow& main;
    RackBox *rackbox;
    bool hidden;
    bool compressed;

    PluginUI(MainWindow& main, const gx_engine::PluginList& pl, const char* id_,
	     const Glib::ustring& fname_="", const Glib::ustring& tooltip_="");
    PluginType get_type() const {
	return (plugin->pdef->flags & PGN_STEREO) ? PLUGIN_TYPE_STEREO : PLUGIN_TYPE_MONO;
    }
    const char *get_id() const { return plugin->pdef->id; }
    const char *get_name() const { return plugin->pdef->name; }
    void display(bool v, bool animate);
    void display_new(bool unordered = false);
    inline bool is_displayed();
    void set_ui_merge_id(Gtk::UIManager::ui_merge_id id) { merge_id = id; }
    void set_action(Glib::RefPtr<Gtk::ToggleAction>& act);
};


/****************************************************************
 ** class DragIcon
 */

class DragIcon {
private:
    enum { gradient_length = 40 };
    Gtk::Window *window;
    Glib::RefPtr<Gdk::Pixbuf> drag_icon_pixbuf;
private:
    bool icon_expose_event(GdkEventExpose *ev);
    void create_drag_icon_pixbuf(const PluginUI& plugin, Glib::RefPtr<Gdk::Colormap> rgba, gx_system::CmdlineOptions& options);
    bool window_expose_event(GdkEventExpose *event, Gtk::OffscreenWindow& w);
public:
    DragIcon(const PluginUI& plugin, Glib::RefPtr<Gdk::DragContext> context, gx_system::CmdlineOptions& options, int xoff=0);
    ~DragIcon();
};


/****************************************************************
 ** class RackBox, class MiniRackBox
 */

//#define USE_SZG   // use a SizeGroup instead of predefined width for Gxw::Switch("switchit")

class MiniRackBox;
class RackContainer;

class RackBox: public Gtk::VBox {
private:
#ifdef USE_SZG
    static Glib::RefPtr<Gtk::SizeGroup> szg;
#endif
    PluginUI& plugin;
    MainWindow& main;
    bool vis;
    bool config_mode;
    sigc::connection anim_tag;
    bool compress;
    bool delete_button;
    Gxw::PaintBox mbox;
    MiniRackBox* minibox;
    Gtk::Widget *fbox;
    std::string target;
    int anim_height;
    int anim_step;
    DragIcon *drag_icon;
    int target_height;
    Gxw::PaintBox box;
    int box_visible;
    int position;
    unsigned int effect_post_pre;
    Gxw::Switch on_off_switch;
    gx_gui::uiToggle<bool> toggle_on_off;
private:
    static void set_paintbox(Gxw::PaintBox& pb, PluginType tp);
    static Gtk::Widget *make_label(const PluginUI& plugin, gx_system::CmdlineOptions& options, bool useshort=false);
    static Gtk::Widget *make_bar(int left=4, int right=4, bool sens=false);
    Gtk::Widget *wrap_bar(int left=4, int right=4, bool sens=false);
    void init_dnd();
    void enable_drag(bool v);
    bool animate_vanish();
    void animate_remove();
    void on_my_drag_begin(const Glib::RefPtr<Gdk::DragContext>& context);
    bool animate_create();
    void on_my_drag_end(const Glib::RefPtr<Gdk::DragContext>& context);
    void on_my_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection, int info, int timestamp);
    void vis_switch(Gtk::Widget& a, Gtk::Widget& b);
    Gtk::Button *make_expand_button(bool expand);
    void on_preset_popup_destroy(Gtk::Menu *w);
    void set_plugin_preset(Glib::RefPtr<gx_preset::PluginPresetList> l, Glib::ustring name);
    void set_plugin_std_preset();
    void save_plugin_preset(Glib::RefPtr<gx_preset::PluginPresetList> l);
    void remove_plugin_preset(Glib::RefPtr<gx_preset::PluginPresetList> l);
    void preset_popup();
    Gtk::Button *make_preset_button();
    Gtk::HBox *make_full_box(gx_system::CmdlineOptions& options);
    Gtk::VBox *switcher_vbox(gx_system::CmdlineOptions& options);
    bool has_delete() const { return delete_button; }
    friend bool rackboxes_less(RackBox *a, RackBox *b);
public:
    RackBox(PluginUI& plugin, MainWindow& main, Gtk::Widget* bare=0);
    static Gtk::Widget *create_drag_widget(const PluginUI& plugin, gx_system::CmdlineOptions& options);
    RackContainer *get_parent();
    bool can_compress() { return compress; }
    friend class MiniRackBox;
    const char *get_id() const { return plugin.get_id(); }
    void set_config_mode(bool mode);
    void swtch(bool mini);
    void pack(Gtk::Widget *mainbox, Gtk::Widget *minibox);
    void animate_insert();
    static Gtk::Widget *create_icon_widget(const PluginUI& plugin, gx_system::CmdlineOptions& options);
    void setOrder(int pos, unsigned int post_pre) {
	position = plugin.plugin->position = pos;
	effect_post_pre = plugin.plugin->effect_post_pre = post_pre;
    }
    void storeOrder() { position = plugin.plugin->position; effect_post_pre = plugin.plugin->effect_post_pre; }
    bool hasOrderDiff() { return plugin.plugin->position != position || plugin.plugin->effect_post_pre != effect_post_pre; }
    int position_weight() { return plugin.plugin->position_weight(); }
    bool is_displayed() { return box_visible; }
    void display(bool v, bool animate);
    bool get_plug_visible() { return !fbox->get_visible(); }
};

class MiniRackBox: public Gtk::HBox {
private:
    static Glib::RefPtr<Gtk::SizeGroup> szg_label;
    Gtk::EventBox evbox;
    Gtk::HBox mconbox;
    Gtk::Button *mb_expand_button;
    Gtk::Widget *mb_delete_button;
    Gtk::Button *preset_button;
    Gxw::Switch on_off_switch;
    gx_gui::uiToggle<bool> toggle_on_off;
private:
    Gtk::Widget *make_delete_button(RackBox& rb);
public:
    MiniRackBox(RackBox& rb, gx_system::CmdlineOptions& options);
    void set_config_mode(bool mode);
    void pack(Gtk::Widget *w);
};

inline bool PluginUI::is_displayed() {
    return rackbox && rackbox->is_displayed();
}

/****************************************************************
 ** class RackContainer
 */

class RackContainer: public Gtk::VBox {
private:
    PluginType tp;
    MainWindow& main;
    bool config_mode;
    int in_drag;
    int child_count;
    int switch_level;
    std::vector<std::string> targets;
    std::vector<std::string> othertargets;
    sigc::connection highlight_connection;
    sigc::connection autoscroll_connection;
private:
    bool drag_highlight_expose(GdkEventExpose *event, int y0);
    void find_index(int x, int y, int* len, int *ypos);
    void on_my_remove(Gtk::Widget*);
    bool check_targets(const std::vector<std::string>& tgts1, const std::vector<std::string>& tgts2);
    virtual bool on_drag_motion(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, guint timestamp);
    virtual void on_drag_leave(const Glib::RefPtr<Gdk::DragContext>& context, guint timestamp);
    virtual void on_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& data, guint info, guint timestamp);
    virtual void on_add(Widget* ch);
    void renumber();
    bool scroll_timeout();
    bool scrollother_timeout();
public:
    typedef Glib::ListHandle<const RackBox*> rackbox_const_list;
    typedef Glib::ListHandle<RackBox*> rackbox_list;
    RackContainer(PluginType tp, MainWindow& main);
    rackbox_list get_children() {
	Glib::ListHandle<Widget*> l = Gtk::VBox::get_children();
	void *p = &l;
	return *reinterpret_cast<rackbox_list*>(p);
    }
    rackbox_const_list get_children() const {
	Glib::ListHandle<const Widget*> l = Gtk::VBox::get_children();
	void *p = &l;
	return *reinterpret_cast<rackbox_const_list*>(p);
    }
    bool check_if_animate(const RackBox& rackbox);
    void show_entries();
    void hide_entries();
    void compress_all();
    void expand_all();
    void set_config_mode(bool mode);
    bool empty() const { return child_count == 0; }
    void add(RackBox& r, int pos=-1);
    void check_order();
    void ensure_visible(RackBox& child);
    void reorder(const std::string& name, int pos);
    void increment();
    void decrement();
};


/****************************************************************
 ** class StackBoxBuilderNew
 */

class StackBoxBuilderNew: public gx_gui::StackBoxBuilder {
private:
    int                  fTop;
    GtkWidget*           fBox[stackSize];
    int                  fMode[stackSize];
    gx_engine::GxEngine& engine;
    gx_engine::ParamMap& pmap;
    Gxw::WaveView&       fWaveView;
    Gtk::Label&          convolver_filename_label;
    Gtk::VBox           *widget;
private:
    virtual void openMonoRackBox(const char* label, int* posit, const char *id_on_off, const char *id_pre_post, const char *id_dialog);
    virtual void closeMonoRackBox();
    virtual void openStereoRackBox(const char* label, int* posit, const char *id_on_off, const char *id_dialog);
    virtual void closeStereoRackBox();
    virtual void openVerticalMidiBox(const char* label = "");
public:
    StackBoxBuilderNew(gx_engine::GxEngine& engine_, gx_engine::ParamMap& pmap_,
		       Gxw::WaveView &fWaveView_, Gtk::Label &convolver_filename_label_, gx_ui::GxUI& ui,
		       Glib::RefPtr<Gdk::Pixbuf> window_icon);
    void get_box(const std::string& name, Gtk::Widget*& mainbox, Gtk::Widget*& minibox);
    void prepare();
    void fetch(Gtk::Widget*& mainbox, Gtk::Widget*& minibox);
};


/****************************************************************
 ** class TextLoggingBox
 */

class TextLoggingBox: public Gtk::Window {
private:
    struct tab_table {
	const char *tagname;
	const char *tag_color;
    };
    Gtk::HBox box;
    Gtk::ScrolledWindow scrollbox;
    Gtk::Expander frame;
    Gtk::TextView tbox;
    static tab_table tagdefs[gx_system::kMessageTypeCount];
    Glib::RefPtr<Gtk::TextTag> tags[gx_system::kMessageTypeCount];
    int highest_unseen_msg_level;
    sigc::signal<void> msg_level_changed;
private:
    void set_color();
    bool on_delete_event();
    void set_expander_color(const char *color);
    void show_msg(string msgbuf, gx_system::GxMsgType msgtype, bool plugged);
public:
    TextLoggingBox(const char* label);
    ~TextLoggingBox();
    int get_unseen_msg_level() { return highest_unseen_msg_level; }
    sigc::signal<void>& signal_msg_level_changed() { return msg_level_changed; }
};


/****************************************************************
 ** class MainWindow
 */

struct PluginDesc {
    Glib::ustring group;
    std::vector<PluginUI*> *plugins;
    PluginDesc(const Glib::ustring& g, std::vector<PluginUI*> *p)
	: group(g), plugins(p) {}
};

class Freezer {
private:
    Gtk::Window *window;
    sigc::connection tag;
    int size_x;
    int size_y;
public:
    Freezer();
    ~Freezer();
    void freeze(Gtk::Window *w, int width, int height);
    void freeze_until_width_update(Gtk::Window *w, int width) { freeze(w, width, -1); }
    void freeze_and_size_request(Gtk::Window *w, int width, int height);
    bool thaw_timeout();
    void thaw();
    bool check_thaw(int width, int height);
};

struct GuiParameter {
    // rack tuner
    static const value_pair streaming_labels[];
    static const value_pair tuning_labels[];
    static int mainwin_x;
    static int mainwin_y;
    static int mainwin_width;
    static int mainwin_height;

    gx_engine::BoolParameter *ui_racktuner;
    gx_engine::EnumParameter *racktuner_streaming;
    gx_engine::EnumParameter *racktuner_tuning;
    gx_engine::FloatParameter *racktuner_scale_lim;
    gx_engine::FloatParameter *ui_tuner_reference_pitch;
    gx_engine::SwitchParameter *show_plugin_bar;
    gx_engine::SwitchParameter *presets;
    gx_engine::SwitchParameter *show_rack;
    gx_engine::SwitchParameter *order_rack_v;
    gx_engine::BoolParameter *tuner;
    gx_engine::SwitchParameter *show_values;
    gx_engine::SwitchParameter *show_tooltips;
    gx_engine::SwitchParameter *midi_in_presets;
    gx_engine::IntParameter *mainwin_x_param;
    gx_engine::IntParameter *mainwin_y_param;
    gx_engine::IntParameter *mainwin_width_param;
    gx_engine::IntParameter *mainwin_height_param;

    GuiParameter(gx_engine::ParamMap& pmap);
};

/****************************************************************
 ** GxUiRadioMenu
 ** adds the values of an UEnumParameter as Gtk::RadioMenuItem's
 ** to a Gtk::MenuShell
 */

class GxUiRadioMenu: public gx_ui::GxUiItemUInt {
private:
    Glib::RefPtr<Gtk::RadioAction> action;
    gx_engine::UIntParameter& param;
    virtual void reflectZone();
    void on_changed(Glib::RefPtr<Gtk::RadioAction> act);
public:
    GxUiRadioMenu(gx_ui::GxUI* ui, gx_engine::UIntParameter& param);
    void setup(const Glib::ustring& prefix, const Glib::ustring& postfix,
	       Glib::RefPtr<Gtk::UIManager>& uimanager, Glib::RefPtr<Gtk::ActionGroup>& actiongroup);
};

class PluginDict: public std::map<std::string, PluginUI*> {
private:
    gx_ui::GxUI& ui;
public:
    typedef std::map<std::string, PluginUI*>::iterator iterator;
    PluginDict(gx_ui::GxUI& ui_): std::map<std::string, PluginUI*>(), ui(ui_) {}
    ~PluginDict();
};

class MainWindow: public sigc::trackable {
private:
    gx_ui::GxUI ui;
    Glib::RefPtr<gx_gui::GxBuilder> bld;
    int window_height;
    Freezer freezer;
    PluginDict plugin_dict;
    int oldpos;
    int scrl_size_x;
    int scrl_size_y;
    RackContainer monorackcontainer;
    RackContainer stereorackcontainer;
    int pre_act;
    bool is_visible;
    DragIcon *drag_icon;
    Glib::RefPtr<Gtk::ActionGroup> actiongroup;
    Glib::RefPtr<Gtk::UIManager> uimanager;
    gx_system::CmdlineOptions& options;
    gx_engine::ParamMap&  pmap;
    gx_engine::GxEngine&  engine;
    gx_jack::GxJack       jack;
    gx_preset::GxSettings gx_settings;
    Liveplay *live_play;
    PresetWindow *preset_window;
    Gxw::WaveView fWaveView;
    Gtk::Label convolver_filename_label;
    Glib::RefPtr<Gdk::Pixbuf> gx_head_icon;
    StackBoxBuilderNew boxbuilder;
    gx_portmap::PortMapWindow* portmap_window;
    Glib::RefPtr<Gtk::AccelGroup> accel_group;
    static int skin;
    static bool no_warn_latency;
    gx_ui::UiSignal<int> skin_changed;
    gx_gui::SelectJackControlPgm *select_jack_control;
    TextLoggingBox fLoggingWindow;
    GxUiRadioMenu amp_radio_menu;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_on;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_off;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_bypass;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_jack_connected;
    Glib::RefPtr<Gdk::Pixbuf> pixbuf_jack_disconnected;
    gx_ui::UiSignal<bool> mute_changed;
    gx_ui::UiSignal<bool> ampdetail_sh;
    sigc::connection contrast_conv_conn;
    sigc::connection cab_conv_conn;
    gx_gui::ReportXrun report_xrun;
    bool in_session;
    Glib::RefPtr<Gtk::StatusIcon> status_icon;
    Glib::RefPtr<Gdk::Pixbuf> gx_head_midi;
    Glib::RefPtr<Gdk::Pixbuf> gx_head_warn;
    //
    Glib::RefPtr<Gtk::RadioAction> skin_action;
    Glib::RefPtr<Gtk::RadioAction> latency_action;

    // Widget pointers
    Gxw::PaintBox *tunerbox;
    Gtk::ScrolledWindow *vrack_scrolledbox;
    Gtk::HBox *stereorackcontainerH;
    Gtk::HBox *stereorackcontainerV;
    Gxw::PaintBox *rackcontainer;
    Gtk::ScrolledWindow *stereorackbox;
    Gtk::VBox *monocontainer;
    Gxw::PaintBox *monoampcontainer;
    Gtk::VPaned *main_vpaned;
    Gtk::HBox *amp_toplevel_box;
    Gtk::VBox *monobox;
    Gtk::VBox *upper_rackbox;
    Gtk::ScrolledWindow *preset_scrolledbox;
    Gxw::PaintBox *effects_frame_paintbox;
    Gtk::Image *status_image;
    Gtk::Image *jackd_image;
    Gtk::Image *logstate_image;
    Gtk::Window *window;
    Gtk::HBox *menubox;
    Gtk::ToggleButton *show_rack_button;
    Gtk::ToggleButton *liveplay_button;
    Gtk::ToggleButton *tuner_button;
    Gtk::ToggleButton *effects_button;
    Gtk::ToggleButton *presets_button;
    Gtk::Button *compress_button;
    Gtk::Button *expand_button;
    Gtk::ToolPalette *effects_toolpalette;
    Gxw::PaintBox *amp_background;
    Gxw::Switch *tuner_on_off;
    Gxw::Selector *tuner_mode;
    Gxw::Wheel *tuner_reference_pitch;
    Gxw::Selector *tuner_tuning;
    Gxw::RackTuner *racktuner;
    Gtk::Button *ampdetail_compress;
    Gtk::Button *ampdetail_expand;
    Gtk::Widget *ampdetail_mini;
    Gtk::Widget *ampdetail_normal;
    Gxw::FastMeter *fastmeter[2];
public:
    // Actions
    Glib::RefPtr<Gtk::Action> jack_latency_menu_action;
    Glib::RefPtr<Gtk::Action> compress_action;
    Glib::RefPtr<Gtk::Action> expand_action;
    // ToggleActions
    Glib::RefPtr<Gtk::ToggleAction> rack_config_action;
    Glib::RefPtr<Gtk::ToggleAction> live_play_action;
    Glib::RefPtr<Gtk::ToggleAction> engine_mute_action;
    Glib::RefPtr<Gtk::ToggleAction> engine_bypass_action;
    Glib::RefPtr<Gtk::ToggleAction> jackserverconnection_action;
    Glib::RefPtr<Gtk::ToggleAction> jackports_action;
    Glib::RefPtr<Gtk::ToggleAction> midicontroller_action;
    Glib::RefPtr<Gtk::ToggleAction> meterbridge_action;
    Glib::RefPtr<Gtk::ToggleAction> jackstartup_action;
    Glib::RefPtr<Gtk::ToggleAction> loggingbox_action;
    // UiToggleActions
    Glib::RefPtr<UiSwitchToggleAction> show_plugin_bar_action;
    Glib::RefPtr<UiSwitchToggleAction> presets_action;
    Glib::RefPtr<UiSwitchToggleAction> show_rack_action;
    Glib::RefPtr<UiBoolToggleAction> tuner_action;
    Glib::RefPtr<UiBoolToggleAction> livetuner_action;
    Glib::RefPtr<UiSwitchToggleAction> show_values_action;
    Glib::RefPtr<UiSwitchToggleAction> tooltips_action;
    Glib::RefPtr<UiSwitchToggleAction> midi_in_presets_action;
    // RadioActions
    Glib::RefPtr<UiSwitchRadioAction> rackv_action;
    Glib::RefPtr<Gtk::RadioAction> rackh_action;
private:
    void load_widget_pointers();
    void maybe_shrink_horizontally();
    void on_show_tuner();
    bool is_variable_size();
    void maybe_change_resizable(void);
    void on_show_rack();
    void on_preset_action();
    void on_compress_all();
    void on_expand_all();
    void on_show_plugin_bar();
    void on_rack_configuration();
    void move_widget(Gtk::Widget& w, Gtk::Box& b1, Gtk::Box& b2);
    int rackbox_stacked_vertical() const;
    static void change_expand(Gtk::Widget& w, bool value);
    void on_dir_changed(Glib::RefPtr<Gtk::RadioAction> act);
    void on_configure_event(GdkEventConfigure *ev);
    void clear_box(Gtk::Container& box);
    RackBox *add_rackbox_internal(PluginUI& plugin, Gtk::Widget *mainwidget, Gtk::Widget *miniwidget,
				  bool mini=false, int pos=-1, bool animate=false, Gtk::Widget *bare=0);
    void on_show_values();
    void create_menu(Glib::RefPtr<Gtk::ActionGroup>& actiongroup, const GuiParameter& para);
    void add_toolitem(PluginUI& pl, Gtk::ToolItemGroup *gw);
    bool on_visibility_notify(GdkEventVisibility *ev);
    void on_live_play();
    void on_ti_drag_begin(const Glib::RefPtr<Gdk::DragContext>& context, const PluginUI& plugin);
    void on_ti_drag_end(const Glib::RefPtr<Gdk::DragContext>& context);
    void on_ti_drag_data_get(const Glib::RefPtr<Gdk::DragContext>& context, Gtk::SelectionData& selection, int info, int timestamp, const char *effect_id);
    void on_ti_drag_data_delete(const Glib::RefPtr<Gdk::DragContext>& context, const char *effect_id);
    bool on_ti_button_press(GdkEventButton *ev, const char *effect_id);
    void on_tp_drag_data_received(const Glib::RefPtr<Gdk::DragContext>& context, int x, int y, const Gtk::SelectionData& data, int info, int timestamp);
    void fill_pluginlist();
    void make_icons();
    bool update_all_gui();
    void jack_connection();
    void on_miditable_toggle();
    void on_portmap_activate();
    void on_portmap_response(int);
    bool connect_jack(bool v);
    int start_jack();
    void add_skin_menu();
    void change_skin(Glib::RefPtr<Gtk::RadioAction> action);
    void on_jack_client_changed();
    void add_latency_menu();
    void change_latency(Glib::RefPtr<Gtk::RadioAction> action);
    void user_disable_latency_warn(Gtk::CheckButton* disable_warn);
    int gx_wait_latency_warn();
    void set_latency();
    void on_select_jack_control();
    void delete_select_jack_control();
    void on_log_activate();
    void do_program_change(int pgm);
    void on_engine_toggled();
    void on_engine_state_change(gx_engine::GxEngineState state);
    void set_new_skin(unsigned int idx);
    void set_tuning(Gxw::RackTuner& tuner);
    void setup_tuner(Gxw::RackTuner& tuner);
    bool on_toggle_mute(GdkEventButton* ev);
    void on_msg_level_changed();
    void on_ampdetail_switch(bool compress);
    void on_show_oscilloscope(bool v);
    void set_waveview_buffer(unsigned int size);
    void on_oscilloscope_post_pre(int post_pre);
    int on_oscilloscope_activate(bool start);
    bool on_refresh_oscilloscope();
    bool refresh_meter_level();
    bool check_cab_state();
    void cab_conv_restart();
    void contrast_conv_restart();
    bool survive_jack_shutdown();
    void gx_jack_is_down();
    void jack_session_event();
    void jack_session_event_ins();
    void set_in_session();
    void hide_extended_settings();
    void systray_menu(guint button, guint32 activate_time);
    void overload_status_changed();
    bool on_window_state_changed(GdkEventWindowState* event);
    bool on_meter_button_release(GdkEventButton* ev);
public:
    MainWindow(gx_engine::GxEngine& engine, gx_system::CmdlineOptions& options, gx_engine::ParamMap& pmap);
    ~MainWindow();
    void hide_effect(const std::string& name);
    bool check_if_animate(RackContainer& rb) const;
    RackContainer& get_monorackcontainer() { return monorackcontainer; }
    RackBox *add_rackbox(PluginUI& pl, bool mini=false, int pos=-1, bool animate=false);
    bool check_if_rack_container_size_animate(const RackContainer& rackcontainer) const;
    void add_icon(const std::string& name);
    PluginUI *get_plugin(const std::string& name) { return plugin_dict[name]; }
    PluginDict::iterator plugins_begin() { return plugin_dict.begin(); }
    PluginDict::iterator plugins_end() { return plugin_dict.end(); }
    void run();
    gx_system::CmdlineOptions& get_options() { return options; }
    gx_ui::GxUI& get_ui() { return ui; }
    Glib::RefPtr<gx_preset::PluginPresetList> load_plugin_preset_list(const Glib::ustring& id) { return gx_settings.load_plugin_preset_list(id); }
    gx_engine::ParamMap& get_parametermap() { return pmap; }
    bool is_loading() { return gx_settings.is_loading(); }
    void add_plugin(std::vector<PluginUI*> *p, const char *id, const Glib::ustring& fname_="", const Glib::ustring& tooltip_="");
    void set_rackbox_expansion();
    double stop_at_stereo_bottom(double off, double step_size, double pagesize);
    double stop_at_mono_top(double off, double step_size);
};
