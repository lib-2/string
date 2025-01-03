#include "-2/string.h"

#ifdef __cplusplus
#include <cstdlib>
#include <cstring>
#else
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#endif

g_err_t g_2_string(const char *c_str, g_2_string_t *out) {
  const size_t length = strlen(c_str);
  char *const result = (char *)malloc(length + 1);
  if (!result) {
    return true;
  }
  memcpy(result, c_str, length + 1);
  *out = (g_2_string_t){.c_str = result, .length = length};
  return false;
}

g_err_t g_2_string_duplicate(const g_2_string_t str, g_2_string_t *out) {
  char *const result = (char *)malloc(str.length + 1);
  if (!result) {
    return true;
  }
  memcpy(result, str.c_str, str.length + 1);
  *out = (g_2_string_t){.c_str = result, .length = str.length};
  return false;
}

void g_2_string_dispose(g_2_string_t *str) { free(str->c_str); }
