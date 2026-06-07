#include <stdio.h>
#include "array.h"

int main() {
    long array[] = { 12, 10, -12, 3, 4, 3, 1, -100, -12 };
    int size = sizeof(array) / sizeof(long);

    printf("Before Bubble Sort:\n");
    print_l(array, size);

    bsort_l(array, size);

    printf("After Bubble Sort:\n");
    print_l(array, size);

    return 0;
}