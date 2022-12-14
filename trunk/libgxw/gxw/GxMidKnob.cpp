/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
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
 */

#include "GxMidKnob.h"

G_DEFINE_TYPE(GxMidKnob, gx_mid_knob, GX_TYPE_KNOB)

static void gx_mid_knob_class_init(GxMidKnobClass *klass)
{
	klass->parent_class.stock_id = "midknob";
	gtk_widget_class_set_css_name((GtkWidgetClass*)klass, "gx-mid-knob");
}

static void gx_mid_knob_init(GxMidKnob *mid_knob)
{
}
