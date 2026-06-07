#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

int compare_string(const void *a, const void *b) {
    const char * const *pa = a;
    const char * const *pb = b;
    return strcmp(*pa, *pb);
}

int main() {
    int n;
    
    printf("Number of strings: ");
    if (scanf("%d", &n) != 1) return 1;

    char **array = malloc(n * sizeof(char *));
    if (array == NULL) return 1;

    printf("Enter strings:\n");
    for (int i = 0; i < n; i++) {
        char buffer[1024];
        scanf("%1023s", buffer);
        array[i] = malloc(strlen(buffer) + 1);
        if (array[i] != NULL) {
            strcpy(array[i], buffer);
        }
    }

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) printf("%s ", array[i]);
    printf("\n");

    qsort(array, n, sizeof(*array), compare_string);

    printf("After sorting:\n");
    for (int i = 0; i < n; i++) printf("%s ", array[i]);
    printf("\n");

    for (int i = 0; i < n; i++) free(array[i]);
    free(array);
    return 0;
}
