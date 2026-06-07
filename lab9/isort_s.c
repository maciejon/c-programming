#include <string.h>
#include "array.h"

void isort_s(char * tab[], int size) {
    for (int i = 1; i < size; i++) {
        char * value = tab[i];
        int j = i - 1;

        while (j >= 0 && strcmp(tab[j], value) > 0) {
            tab[j + 1] = tab[j];
            j--;
        }

        tab[j + 1] = value;
    }
}