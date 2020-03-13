
#include "lv2/lv2plug.in/ns/lv2core/lv2.h"
#include "lv2/lv2plug.in/ns/extensions/ui/ui.h"

// xwidgets.h includes xputty.h and all defined widgets from Xputty
#include "xwidgets.h"

#include "gxamp.h"

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                define controller numbers
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

#define CONTROLS 12

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                the main LV2 handle->XWindow
-----------------------------------------------------------------------
----------------------------------------------------------------------*/


// main window struct
typedef struct {
    void *parentXwindow;
    Xputty main;
    Widget_t *win;
    Widget_t *widget[CONTROLS];
    cairo_surface_t *screw;
    int block_event;
    float schedule;

    void *controller;
    LV2UI_Write_Function write_function;
    LV2UI_Resize* resize;
} X11_UI;

// draw the window
static void draw_window(void *w_, void* user_data) {
    Widget_t *w = (Widget_t*)w_;
    X11_UI* ui = (X11_UI*)w->parent_struct;
    int width = w->width;
    int height = w->height;
    set_pattern(w,&w->app->color_scheme->selected,&w->app->color_scheme->normal,BACKGROUND_);
    cairo_paint (w->crb);

    cairo_text_extents_t extents;
    use_text_color_scheme(w, get_color_state(w));
    cairo_set_source_rgb (w->crb,0.45, 0.45, 0.45);
    float font_size = min(16.0,((height/2.2 < (width*0.5)/3) ? height/2.2 : (width*0.5)/3));
    cairo_set_font_size (w->crb, font_size);
    cairo_select_font_face (w->crb, "Sans", CAIRO_FONT_SLANT_NORMAL,
                               CAIRO_FONT_WEIGHT_BOLD);
    cairo_text_extents(w->crb,w->label , &extents);
    double tw = extents.width/2.0;

    widget_set_scale(w);

    cairo_set_source_surface (w->crb, ui->screw,5,5);
    cairo_paint (w->crb);
    cairo_set_source_surface (w->crb, ui->screw,5,w->scale.init_height-29);
    cairo_paint (w->crb);
    cairo_set_source_surface (w->crb, ui->screw,w->scale.init_width-29,w->scale.init_height-29);
    cairo_paint (w->crb);
    cairo_set_source_surface (w->crb, ui->screw,w->scale.init_width-29,5);
    cairo_paint (w->crb);
    cairo_new_path (w->crb);

    cairo_set_source_rgb (w->crb,0.45, 0.45, 0.45);
    cairo_move_to (w->crb, 395-tw, 177 );
    cairo_show_text(w->crb, w->label);
    cairo_new_path (w->crb);
    cairo_scale (w->crb, 0.95, 0.95);
    cairo_set_source_surface (w->crb, w->image,710,5);
    cairo_paint (w->crb);
    cairo_scale (w->crb, 1.05, 1.05);
    widget_reset_scale(w);
}

// draw the knobs
static void draw_my_knob(void *w_, void* user_data) {
    Widget_t *w = (Widget_t*)w_;
    int width = w->width-2;
    int height = w->height-2;

    const double scale_zero = 20 * (M_PI/180); // defines "dead zone" for knobs
    int arc_offset = 2;
    int knob_x = 0;
    int knob_y = 0;

    int grow = (width > height) ? height:width;
    knob_x = grow-1;
    knob_y = grow-1;
    /** get values for the knob **/

    int knobx = (width - knob_x) * 0.5;
    int knobx1 = width* 0.5;

    int knoby = (height - knob_y) * 0.5;
    int knoby1 = height * 0.5;

    double knobstate = adj_get_state(w->adj_y);
    double angle = scale_zero + knobstate * 2 * (M_PI - scale_zero);

    double pointer_off =knob_x/3.5;
    double radius = min(knob_x-pointer_off, knob_y-pointer_off) / 2;
    double lengh_x = (knobx+radius+pointer_off/2) - radius * sin(angle);
    double lengh_y = (knoby+radius+pointer_off/2) + radius * cos(angle);
    double radius_x = (knobx+radius+pointer_off/2) - radius/ 1.18 * sin(angle);
    double radius_y = (knoby+radius+pointer_off/2) + radius/ 1.18 * cos(angle);
    cairo_pattern_t* pat;
    cairo_new_path (w->crb);

    pat = cairo_pattern_create_linear (0, 0, 0, knob_y);
    cairo_pattern_add_color_stop_rgba (pat, 1,  0.3, 0.3, 0.3, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.75,  0.2, 0.2, 0.2, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.5,  0.15, 0.15, 0.15, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.25,  0.1, 0.1, 0.1, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0,  0.05, 0.05, 0.05, 1.0);

    cairo_scale (w->crb, 0.95, 1.05);
    cairo_arc(w->crb,knobx1+arc_offset/2, knoby1-arc_offset, knob_x/2.2, 0, 2 * M_PI );
    cairo_set_source (w->crb, pat);
    cairo_fill_preserve (w->crb);
    cairo_set_source_rgb (w->crb, 0.1, 0.1, 0.1); 
    cairo_set_line_width(w->crb,1);
    cairo_stroke(w->crb);
    cairo_scale (w->crb, 1.05, 0.95);
    cairo_new_path (w->crb);
    cairo_pattern_destroy (pat);
    pat = NULL;

    pat = cairo_pattern_create_linear (0, 0, 0, knob_y);
    cairo_pattern_add_color_stop_rgba (pat, 0,  0.3, 0.3, 0.3, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.25,  0.2, 0.2, 0.2, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.5,  0.15, 0.15, 0.15, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 0.75,  0.1, 0.1, 0.1, 1.0);
    cairo_pattern_add_color_stop_rgba (pat, 1,  0.05, 0.05, 0.05, 1.0);

    cairo_arc(w->crb,knobx1, knoby1, knob_x/2.6, 0, 2 * M_PI );
    cairo_set_source (w->crb, pat);
    cairo_fill_preserve (w->crb);
    cairo_set_source_rgb (w->crb, 0.1, 0.1, 0.1); 
    cairo_set_line_width(w->crb,1);
    cairo_stroke(w->crb);
    cairo_new_path (w->crb);
    cairo_pattern_destroy (pat);

    /** create a rotating pointer on the kob**/
    cairo_set_line_cap(w->crb, CAIRO_LINE_CAP_ROUND); 
    cairo_set_line_join(w->crb, CAIRO_LINE_JOIN_BEVEL);
    cairo_move_to(w->crb, radius_x, radius_y);
    cairo_line_to(w->crb,lengh_x,lengh_y);
    cairo_set_line_width(w->crb,3);
    cairo_set_source_rgb (w->crb,0.63,0.63,0.63);
    cairo_stroke(w->crb);
    cairo_new_path (w->crb);

    cairo_text_extents_t extents;
    /** show value on the kob**/
    if (w->state>0.0 && w->state<4.0) {
        char s[64];
        const char* format[] = {"%.1f", "%.2f", "%.3f"};
        snprintf(s, 63, format[2-1], w->adj_y->value);
        cairo_set_source_rgb (w->crb, 0.6, 0.6, 0.6);
        cairo_set_font_size (w->crb, min(11.0,knobx1/3));
        cairo_select_font_face (w->crb, "Sans", CAIRO_FONT_SLANT_NORMAL,
                                   CAIRO_FONT_WEIGHT_BOLD);
        cairo_text_extents(w->crb, s, &extents);
        cairo_move_to (w->crb, knobx1-extents.width/2, knoby1+extents.height/2);
        cairo_show_text(w->crb, s);
        cairo_new_path (w->crb);
    }

    /** show label below the knob**/
    use_text_color_scheme(w, get_color_state(w));
    float font_size = min(11.0,((height/2.2 < (width*0.5)/3) ? height/2.2 : (width*0.5)/3));
    cairo_set_font_size (w->crb, font_size);
    cairo_select_font_face (w->crb, "Sans", CAIRO_FONT_SLANT_NORMAL,
                               CAIRO_FONT_WEIGHT_BOLD);
    cairo_text_extents(w->crb,w->label , &extents);

    cairo_move_to (w->crb, knobx1-extents.width/2, height );
    cairo_show_text(w->crb, w->label);
    cairo_new_path (w->crb);
}

// if controller value changed send notify to host
static void value_changed(void *w_, void* user_data) {
    Widget_t *w = (Widget_t*)w_;
    X11_UI* ui = (X11_UI*)w->parent_struct;
    if (ui->block_event != w->data) 
        ui->write_function(ui->controller,w->data,sizeof(float),0,&w->adj->value);
    ui->block_event = -1;
}

// shortcut to create knobs with portindex binding
Widget_t* add_my_knob(Widget_t *w, PortIndex index, const char * label,
                                X11_UI* ui, int x, int y, int width, int height) {
    w = add_knob(ui->win, label, x, y, width, height);
    w->func.expose_callback = draw_my_knob;    
    w->parent_struct = ui;
    w->data = index;
    w->func.value_changed_callback = value_changed;
    return w;
}

// shortcut to create comboboxes with portindex binding
Widget_t* add_my_combobox(Widget_t *w, PortIndex index, const char * label, const char** items,
                                size_t len, int active, X11_UI* ui, int x, int y, int width, int height) {
    w = add_combobox(ui->win, label, x, y, width, height);
    size_t st = 0;
    for(st = 0; st < len; st++) {
        combobox_add_entry(w,items[st]);
    }
    w->parent_struct = ui;
    w->data = index;
    combobox_set_active_entry(w, active);
    w->func.value_changed_callback = value_changed;
    return w;
}

// init the xwindow and return the LV2UI handle
static LV2UI_Handle instantiate(const struct _LV2UI_Descriptor * descriptor,
            const char * plugin_uri, const char * bundle_path,
            LV2UI_Write_Function write_function,
            LV2UI_Controller controller, LV2UI_Widget * widget,
            const LV2_Feature * const * features) {

    X11_UI* ui = (X11_UI*)malloc(sizeof(X11_UI));

    if (!ui) {
        fprintf(stderr,"ERROR: failed to instantiate plugin with URI %s\n", plugin_uri);
        return NULL;
    }

    ui->parentXwindow = 0;
    LV2UI_Resize* resize = NULL;
    ui->block_event = -1;
    ui->schedule = 0.0;

    int i = 0;
    for (; features[i]; ++i) {
        if (!strcmp(features[i]->URI, LV2_UI__parent)) {
            ui->parentXwindow = features[i]->data;
        } else if (!strcmp(features[i]->URI, LV2_UI__resize)) {
            resize = (LV2UI_Resize*)features[i]->data;
        }
    }

    if (ui->parentXwindow == NULL)  {
        fprintf(stderr, "ERROR: Failed to open parentXwindow for %s\n", plugin_uri);
        free(ui);
        return NULL;
    }
    // init Xputty
    main_init(&ui->main);
    // create the toplevel Window on the parentXwindow provided by the host
    ui->win = create_window(&ui->main, (Window)ui->parentXwindow, 0, 0, 790, 186);
    ui->win->parent_struct = ui;
    ui->win->label = "GxAmplifier-X";
    widget_get_png(ui->win, LDVAR(guitarix_png));
    ui->screw = surface_get_png(ui->win, ui->screw, LDVAR(screwhead_png));
    // connect the expose func
    ui->win->func.expose_callback = draw_window;
    // create knob widgets
    ui->widget[0] = add_my_knob(ui->widget[0], GAIN1,"Mastergain", ui,675, 60, 90, 115);
    set_adjustment(ui->widget[0]->adj,0.0, 0.0, -20.0, 20.0, 0.1, CL_CONTINUOS);

    ui->widget[1] = add_my_knob(ui->widget[1], PREGAIN,"Pregain", ui,30, 60, 90, 115);
    set_adjustment(ui->widget[1]->adj,0.0, 0.0, -20.0, 20.0, 0.1, CL_CONTINUOS);

    ui->widget[2] = add_my_knob(ui->widget[2], WET_DRY,"Distortion", ui,132, 67, 75, 90);
    set_adjustment(ui->widget[2]->adj,1.0, 1.0, 1.0, 100.0, 1.0, CL_CONTINUOS);

    ui->widget[3] = add_my_knob(ui->widget[3], DRIVE,"Drive", ui,215, 70, 70, 85);
    set_adjustment(ui->widget[3]->adj,0.01, 0.01, 0.01, 1.0, 0.01, CL_CONTINUOS);

    ui->widget[4] = add_my_knob(ui->widget[4], TREBLE,"Treble", ui,295, 72, 65, 80);
    set_adjustment(ui->widget[4]->adj,0.5, 0.5, 0.0, 1.0, 0.01, CL_CONTINUOS);

    ui->widget[5] = add_my_knob(ui->widget[5], MIDDLE,"Mid", ui,365, 72, 65, 80);
    set_adjustment(ui->widget[5]->adj,0.5, 0.5, 0.0, 1.0, 0.01, CL_CONTINUOS);

    ui->widget[6] = add_my_knob(ui->widget[6], BASS,"Bass", ui,435, 72, 65, 80);
    set_adjustment(ui->widget[6]->adj,0.5, 0.5, 0.0, 1.0, 0.01, CL_CONTINUOS);

    ui->widget[7] = add_my_knob(ui->widget[7], ALevel,"Presence", ui,510, 70, 70, 85);
    set_adjustment(ui->widget[7]->adj,1.0, 1.0, 1.0, 10.0, 0.1, CL_CONTINUOS);

    ui->widget[8] = add_my_knob(ui->widget[8], CLevel,"Cabinet", ui,590, 67, 75, 90);
    set_adjustment(ui->widget[8]->adj,1.0, 1.0, 1.0, 20.0, 0.1, CL_CONTINUOS);


    // create combobox widgets
    const char* tonestacks[] = {"default","Bassman Style","Twin Reverb Style","Princeton Style","JCM-800 Style",
    "JCM-2000 Style","M-Lead Style","M2199 Style","AC-30 Style","Mesa Boogie Style","SOL 100 Style","JTM-45 Style","AC-15 Style",
    "Peavey Style","Ibanez Style","Roland Style","Ampeg Style","Rev.Rocket Style","MIG 100 H Style","Triple Giant Style",
    "Trio Preamp Style","Hughes&Kettner Style","Fender Junior Style","Fender Style","Fender Deville Style",
    "Gibsen Style", "Off" };
    size_t len = sizeof(tonestacks) / sizeof(tonestacks[0]);
    ui->widget[9] = add_my_combobox(ui->widget[9], T_MODEL, "Tonestack", tonestacks, len, 1, ui, 290, 25, 210, 30);

    const char* cab[] = {"4x12","2x12","1x12","4x10","2x10","HighGain Style","Twin Style",
    "Bassman Style","Marshall Style","AC30 Style","Princeton Style","A2 Style","1x15","Mesa Style","Briliant","Vitalize",
    "Charisma","1x8", "Off" };
    len = sizeof(cab) / sizeof(cab[0]);
    ui->widget[10] = add_my_combobox(ui->widget[10], C_MODEL, "Cabinet", cab, len, 0, ui, 530, 25, 210, 30);

    const char* tubes[] = {"12ax7","12AU7","12AT7","6DJ8","6C16","6V6","12ax7 feedback",
    "12AU7 feedback","12AT7 feedback","6DJ8 feedback","pre 12ax7/ master 6V6","pre 12AU7/ master 6V6",
    "pre 12AT7/ master 6V6","pre 6DJ8/ master 6V6","pre 12ax7/ push-pull 6V6","pre 12AU7/ push-pull 6V6",
    "pre 12AT7/ push pull 6V6","pre 6DJ8/ push-pull 6V6" };
    len = sizeof(tubes) / sizeof(tubes[0]);
    ui->widget[11] = add_my_combobox(ui->widget[11], MODEL, "Tubes", tubes, len, 0, ui, 50, 25, 210, 30);

    // map all widgets into the toplevel Widget_t
    widget_show_all(ui->win);
    // set the widget pointer to the X11 Window from the toplevel Widget_t
    *widget = (void*)ui->win->widget;
    // request to resize the parentXwindow to the size of the toplevel Widget_t
    if (resize){
        ui->resize = resize;
        resize->ui_resize(resize->handle, 790, 186);
    }
    // store pointer to the host controller
    ui->controller = controller;
    // store pointer to the host write function
    ui->write_function = write_function;
    
    return (LV2UI_Handle)ui;
}

// disable presence and cabinet controlls when worker threads not been supported
static void set_sensitive_state(X11_UI* ui, float state) {
    if (fabs(state - ui->schedule)<0.1) return;
    if ( state > 0) {
        ui->widget[10]->state = INSENSITIVE_;
        ui->widget[10]->childlist->childs[0]->state = INSENSITIVE_;
        ui->widget[7]->state = INSENSITIVE_;
        ui->widget[8]->state = INSENSITIVE_;
    } else {
        ui->widget[10]->state = NORMAL_;
        ui->widget[10]->childlist->childs[0]->state = NORMAL_;
        ui->widget[7]->state = NORMAL_;
        ui->widget[8]->state = NORMAL_;
    }
}

// cleanup after usage
static void cleanup(LV2UI_Handle handle) {
    X11_UI* ui = (X11_UI*)handle;
    cairo_surface_destroy(ui->screw);
    // Xputty free all memory used
    main_quit(&ui->main);
    free(ui);
}

/*---------------------------------------------------------------------
-----------------------------------------------------------------------    
                        LV2 interface
-----------------------------------------------------------------------
----------------------------------------------------------------------*/

// port value change message from host
static void port_event(LV2UI_Handle handle, uint32_t port_index,
                        uint32_t buffer_size, uint32_t format,
                        const void * buffer) {
    X11_UI* ui = (X11_UI*)handle;
    float value = *(float*)buffer;
    int i=0;
    for (;i<CONTROLS;i++) {
        if (port_index == (uint32_t)ui->widget[i]->data) {
            // prevent event loop between host and plugin
            ui->block_event = (int)port_index;
            // Xputty check if the new value differs from the old one
            // and set new one, when needed
            check_value_changed(ui->widget[i]->adj, &value);
        }
   }
    if (port_index == SCHEDULE) {
        set_sensitive_state(ui, value);
    }
}

// LV2 idle interface to host
static int ui_idle(LV2UI_Handle handle) {
    X11_UI* ui = (X11_UI*)handle;
    // Xputty event loop setup to run one cycle when called
    run_embedded(&ui->main);
    return 0;
}

// LV2 resize interface to host
static int ui_resize(LV2UI_Feature_Handle handle, int w, int h) {
    X11_UI* ui = (X11_UI*)handle;
    // Xputty sends configure event to the toplevel widget to resize itself
    if (ui) send_configure_event(ui->win,0, 0, w, h);
    return 0;
}

// connect idle and resize functions to host
static const void* extension_data(const char* uri) {
    static const LV2UI_Idle_Interface idle = { ui_idle };
    static const LV2UI_Resize resize = { 0 ,ui_resize };
    if (!strcmp(uri, LV2_UI__idleInterface)) {
        return &idle;
    }
    if (!strcmp(uri, LV2_UI__resize)) {
        return &resize;
    }
    return NULL;
}

static const LV2UI_Descriptor descriptor = {
    GXPLUGIN_UI_URI,
    instantiate,
    cleanup,
    port_event,
    extension_data
};



#ifdef __cplusplus
extern "C" {
#endif
LV2_SYMBOL_EXPORT
const LV2UI_Descriptor* lv2ui_descriptor(uint32_t index) {
    switch (index) {
        case 0:
            return &descriptor;
        default:
        return NULL;
    }
}
#ifdef __cplusplus
}
#endif

