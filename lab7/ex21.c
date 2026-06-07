#include <stdio.h>

void print_l(const long tab[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");
}

void print_reverse_l(const long tab[], int size) {
    for (int i = size - 1; i >= 0; --i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");
}

int main(void) {
    long tab[] = { 5, 10, 15, 20 };
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array:\n");
    print_l(tab, size);
    
    printf("Reversed array:\n");
    print_reverse_l(tab, size);

    return 0;
}