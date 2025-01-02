#ifndef G_2_STRING_H
#define G_2_STRING_H

#include "-0_common.h"
#include "-0_types.h"

#include "string_types.h"

G_EXPORT g_0_err_t g_2_string(const char *c_str, g_2_string_t *out);

G_EXPORT g_0_err_t g_2_string_duplicate(const g_2_string_t str,
                                        g_2_string_t *out);

G_EXPORT void g_2_string_dispose(g_2_string_t *str);

#endif
