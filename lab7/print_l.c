#include <stdio.h>
#include "array.h"

void print_l(const long tab[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");
}