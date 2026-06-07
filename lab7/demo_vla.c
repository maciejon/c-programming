#include <stdio.h>

int main(void) {
    int n;

    printf("Number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    long tab[n];

    for (int i = 0; i < n; ++i) {
        tab[i] = i * 10L;
    }

    printf("sizeof(tab) = %zu bytes\n", sizeof(tab));

    for (int i = 0; i < n; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");

    return 0;
}