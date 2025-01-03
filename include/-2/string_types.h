#ifndef G_2_STRING_TYPES_H
#define G_2_STRING_TYPES_H

#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif

typedef struct g_2_string {
  char *c_str;
  size_t length;
} g_2_string_t;

#endif
