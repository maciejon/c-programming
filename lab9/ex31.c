#include <stdio.h>
#include "array.h"

int main() {
    char * array[] = { "Dog", "Cat", "Horse", "Pig", "Fish" };
    int size = sizeof(array) / sizeof(char *);

    printf("Before sorting (Insertion Sort):\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    isort_s(array, size);

    printf("After sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", array[i]);
    }
    printf("\n");

    return 0;
}