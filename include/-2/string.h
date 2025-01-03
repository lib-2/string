#ifndef G_2_STRING_H
#define G_2_STRING_H

#include "-0_common.h"

#include "string_types.h"

#ifdef __cplusplus
extern "C" {
#endif

G_API g_err_t g_2_string(const char *c_str, g_2_string_t *out);

G_API g_err_t g_2_string_duplicate(const g_2_string_t str, g_2_string_t *out);

G_API void g_2_string_dispose(g_2_string_t *str);

#ifdef __cplusplus
}
#endif

#endif
