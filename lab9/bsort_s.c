#include <string.h>
#include "array.h"

void bsort_s(char * tab[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (strcmp(tab[j], tab[j + 1]) > 0) {
                char * tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}