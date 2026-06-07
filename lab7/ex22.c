#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    printf("Number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    long *tab = malloc(n * sizeof(*tab));

    if (tab == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        tab[i] = i * 2L;
    }

    for (int i = 0; i < n; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");

    free(tab);
    tab = NULL;

    return 0;
}