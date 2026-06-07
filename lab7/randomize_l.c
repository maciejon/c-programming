#include <stdlib.h>
#include <time.h>
#include "array.h"

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