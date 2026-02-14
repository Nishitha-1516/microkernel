#include <stdio.h>
#include "include/allocator.h"

int main() {

    void* a = custom_malloc(100);
    void* b = custom_malloc(200);
    printf("a: %p\n", a);
    custom_free(a);
    custom_free(b);

    void* c = custom_malloc(250);

    printf("c: %p\n", c);

    return 0;
}