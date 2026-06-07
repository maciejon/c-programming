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