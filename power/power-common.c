#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "power-common.h"

void get_int(const char* file_path, int* value, int fallback_value) {
  FILE *file;
  file = fopen(file_path, "r");
  if (file == NULL) {
      *value = fallback_value;
  }
  fscanf(file, "%d", value);
  fclose(file);
}
