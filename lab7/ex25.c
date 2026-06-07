#include <stdio.h>
#include "array.h"

int main(void) {
    long tab[10];

    randomize_l(tab, 10, -20, 20);
    print_l(tab, 10);

    ARRAY_STATS stats = statistics_l(tab, 10);

    printf("size  = %d\n", stats.size);
    printf("min   = %ld\n", stats.min);
    printf("max   = %ld\n", stats.max);
    printf("range = %ld\n", stats.range);
    printf("sum   = %ld\n", stats.sum);
    printf("mean  = %.2f\n", stats.mean);

    return 0;
}