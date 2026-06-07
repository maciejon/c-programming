#include <stdio.h>
#include "array.h"

ARRAY_STATS statistics_l(const long tab[], int size) {
    ARRAY_STATS stats;
    stats.size = size;

    if (size > 0) {
        stats.min = tab[0];
        stats.max = tab[0];
        stats.sum = tab[0];

        for (int i = 1; i < size; ++i) {
            if (tab[i] < stats.min) stats.min = tab[i];
            if (tab[i] > stats.max) stats.max = tab[i];
            stats.sum += tab[i];
        }

        stats.range = stats.max - stats.min;
        stats.mean = (double)stats.sum / size;
    }

    return stats;
}

int main(void) {
    long tab[] = { 4, -2, 10, 8 };
    int size = sizeof(tab) / sizeof(tab[0]);

    ARRAY_STATS stats = statistics_l(tab, size);

    printf("size  = %d\n", stats.size);
    printf("min   = %ld\n", stats.min);
    printf("max   = %ld\n", stats.max);
    printf("range = %ld\n", stats.range);
    printf("sum   = %ld\n", stats.sum);
    printf("mean  = %.2f\n", stats.mean);

    return 0;
}