#include <stdio.h>

#define SIZE 5

int main(void) {
    long tab[SIZE] = { 12, -4, 7, 0, 25 };

    printf("Elements: ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");

    printf("sizeof(tab) = %zu bytes\n", sizeof(tab));

    printf("Number of elements = %zu\n", sizeof(tab) / sizeof(tab[0]));

    return 0;
}