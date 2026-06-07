#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"

int compare_long(const void *a, const void *b) {
    const long *pa = a;
    const long *pb = b;
    if (*pa < *pb) return -1;
    if (*pa > *pb) return 1;
    return 0;
}

int main() {
    int n;
    long min, max;
    
    printf("Number of elements: ");
    if (scanf("%d", &n) != 1) return 1;
    
    printf("Min value: ");
    if (scanf("%ld", &min) != 1) return 1;
    
    printf("Max value: ");
    if (scanf("%ld", &max) != 1) return 1;

    long *array = malloc(n * sizeof(long));
    if (array == NULL) return 1;

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = min + rand() % (max - min + 1);
    }

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) printf("%ld ", array[i]);
    printf("\n");

    qsort(array, n, sizeof(*array), compare_long);

    printf("After sorting:\n");
    for (int i = 0; i < n; i++) printf("%ld ", array[i]);
    printf("\n");

    free(array);
    return 0;
}
