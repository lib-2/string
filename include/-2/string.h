#ifndef G_2_STRING_H
#define G_2_STRING_H

#include "-0_common.h"
#include "-0_debug_types.h"
#include "-0_types.h"

#include "string_types.h"

G_EXPORT g_0_err_t g_2_string(
    G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE const char *c_str, g_2_string_t *out);

G_EXPORT g_0_err_t g_2_string_duplicate(
    G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE const g_2_string_t str,
    g_2_string_t *out);

G_EXPORT void
g_2_string_dispose(G_0_DEBUG_FUNCTION_PARAMETER_PRELUDE g_2_string_t str);

#endif
