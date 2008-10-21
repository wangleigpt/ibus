/* vim:set et sts=4: */
/* bus - The Input Bus
 * Copyright (C) 2008-2009 Huang Peng <shawn.p.huang@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
#ifndef __INPUT_CONTEXT_H_
#define __INPUT_CONTEXT_H_

#include <ibus.h>
#include "connection.h"

/*
 * Type macros.
 */

/* define GOBJECT macros */
#define BUS_TYPE_INPUT_CONTEXT             \
    (bus_input_context_get_type ())
#define BUS_INPUT_CONTEXT(obj)             \
    (G_TYPE_CHECK_INSTANCE_CAST ((obj), BUS_TYPE_INPUT_CONTEXT, BusInputContext))
#define BUS_INPUT_CONTEXT_CLASS(klass)     \
    (G_TYPE_CHECK_CLASS_CAST ((klass), BUS_TYPE_INPUT_CONTEXT, BusInputContextClass))
#define BUS_IS_INPUT_CONTEXT(obj)          \
    (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BUS_TYPE_INPUT_CONTEXT))
#define BUS_IS_INPUT_CONTEXT_CLASS(klass)  \
    (G_TYPE_CHECK_CLASS_TYPE ((klass), BUS_TYPE_INPUT_CONTEXT))
#define BUS_INPUT_CONTEXT_GET_CLASS(obj)   \
    (G_TYPE_CHECK_GET_CLASS ((obj), BUS_TYPE_INPUT_CONTEXT, BusInputContextClass))

G_BEGIN_DECLS

typedef struct _BusInputContext BusInputContext;
typedef struct _BusInputContextClass BusInputContextClass;

struct _BusInputContext {
    IBusService parent;
    /* instance members */
};

struct _BusInputContextClass {
    IBusServiceClass parent;

    /* class members */
};

GType               bus_input_context_get_type          (void);
BusInputContext     *bus_input_context_new              (BusConnection      *connection,
                                                         const gchar        *client);

G_END_DECLS
#endif
