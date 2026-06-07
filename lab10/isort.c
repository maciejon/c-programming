#include <stdlib.h>
#include <string.h>
#include "array.h"

void isort(void *base, int size, size_t width,
           int (*compar)(const void *, const void *)) {
    char *array = base;
    void *value = malloc(width);

    if (value == NULL) {
        return;
    }

    for (int i = 1; i < size; i++) {
        memcpy(value, array + i * width, width);
        int j = i - 1;
        
        while (j >= 0 && compar(array + j * width, value) > 0) {
            memcpy(array + (j + 1) * width, array + j * width, width);
            j--;
        }
        memcpy(array + (j + 1) * width, value, width);
    }

    free(value);
}
