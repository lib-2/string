#define G_THIS
#include "-2/string.h"
#undef G_THIS

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "-0/debug_shortcut.h"

#define G_THIS
#include "-0_common.h"
#undef G_THIS

G_EXPORT g_0_err_t g_2_string(G_P const char *c_str, g_2_string_t *out) {
  G_B;

  const size_t length = strlen(c_str);
  char *const result = (char *)malloc(length + 1);
  if (!result) {
    return true;
  }
  memcpy(result, c_str, length + 1);
  *out = (g_2_string_t){.c_str = result, .length = length};
  return false;
}

G_EXPORT g_0_err_t g_2_string_duplicate(G_P const g_2_string_t str,
                                        g_2_string_t *out) {
  G_B;

  char *const result = (char *)malloc(str.length + 1);
  if (!result) {
    return true;
  }
  memcpy(result, str.c_str, str.length + 1);
  *out = (g_2_string_t){.c_str = result, .length = str.length};
  return false;
}

G_EXPORT void g_2_string_dispose(G_P g_2_string_t *str) {
  G_B;

  free(str->c_str);
}
