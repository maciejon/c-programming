#include "array.h"

void isort_l(long tab[], int size) {
    for (int i = 1; i < size; i++) {
        long value = tab[i];
        int j = i - 1;

        while (j >= 0 && tab[j] > value) {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = value;
    }
}