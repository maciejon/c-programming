#include <stdio.h>
#include "array.h"

int main() {
    long array[] = { 12, 10, -12, 3, 4, 3, 1, -100, -12 };
    int size = sizeof(array) / sizeof(long);

    printf("Before Insertion Sort:\n");
    print_l(array, size);

    isort_l(array, size);

    printf("After Insertion Sort:\n");
    print_l(array, size);

    return 0;
}