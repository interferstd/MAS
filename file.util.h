#ifndef _FILE_UTIL_H
#define _FILE_UTIL_H

#include <stdio.h>

#include "types.util.h"

size_t size(FILE* file);
Buffer load(FILE* file);
void dump(FILE* file, Buffer sorce);

#endif
