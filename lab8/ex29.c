#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    if (size <= 0) return 1;

    long *array = malloc(size * sizeof(long));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    randomize_l(array, size, -100, 100);

    printf("Before Insertion Sort:\n");
    print_l(array, size);

    isort_l(array, size);

    printf("After Insertion Sort:\n");
    print_l(array, size);

    free(array);
    array = NULL;

    return 0;
}