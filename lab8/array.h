#ifndef ARRAY_H
#define ARRAY_H

typedef struct {
    int size;
    long min;
    long max;
    long range;
    long sum;
    double mean;
} ARRAY_STATS;

void print_l(const long tab[], int size);
void randomize_l(long tab[], int size, long min, long max);
ARRAY_STATS statistics_l(const long tab[], int size);
void bsort_l(long tab[], int size);
void isort_l(long tab[], int size);

#endif