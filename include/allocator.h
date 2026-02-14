#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stddef.h>

void* custom_malloc(size_t size);
void custom_free(void* ptr);

#endif