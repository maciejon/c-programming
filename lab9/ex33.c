#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

int main() {
    int size;
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1) {
        return 1;
    }

    char ** array = calloc(size, sizeof(char *));
    if (!array) return 1;

    char buffer[256];
    for (int i = 0; i < size; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%255s", buffer);
        
        array[i] = malloc(strlen(buffer) + 1);
        strcpy(array[i], buffer);
    }

    printf("\nBefore sorting (Insertion Sort):\n");
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

    for (int i = 0; i < size; i++) {
        free(array[i]);
        array[i] = NULL;
    }
    free(array);
    array = NULL;

    return 0;
}