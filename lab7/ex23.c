#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_l(const long tab[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%ld ", tab[i]);
    }
    printf("\n");
}

void randomize_l(long tab[], int size, long min, long max) {
    static int initialized = 0;

    if (!initialized) {
        srand((unsigned int) time(NULL));
        initialized = 1;
    }

    for (int i = 0; i < size; ++i) {
        tab[i] = min + rand() % (max - min + 1);
    }
}

int main(void) {
    long tab[10];
    randomize_l(tab, 10, -20, 20);
    print_l(tab, 10);
    return 0;
}