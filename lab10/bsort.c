#include <stddef.h>
#include "array.h"

static void swap_bytes(void *a, void *b, size_t width) {
    char *pa = a;
    char *pb = b;

    for (size_t i = 0; i < width; i++) {
        char tmp = pa[i];
        pa[i] = pb[i];
        pb[i] = tmp;
    }
}

void bsort(void *base, int size, size_t width,
           int (*compar)(const void *, const void *)) {
    char *array = base;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            void *a = array + j * width;
            void *b = array + (j + 1) * width;
            if (compar(a, b) > 0) {
                swap_bytes(a, b, width);
            }
        }
    }
}
