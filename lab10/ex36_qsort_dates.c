#include <stdio.h>
#include <stdlib.h>
#include "array.h"

typedef struct {
    int day;
    int month;
    int year;
} DAY;

int compare_day(const void *a, const void *b) {
    const DAY *da = a;
    const DAY *db = b;
    
    if (da->year < db->year) return -1;
    if (da->year > db->year) return 1;
    if (da->month < db->month) return -1;
    if (da->month > db->month) return 1;
    if (da->day < db->day) return -1;
    if (da->day > db->day) return 1;
    
    return 0;
}

int main() {
    int n;
    printf("Number of dates: ");
    if (scanf("%d", &n) != 1) return 1;

    DAY *dates = malloc(n * sizeof(DAY));
    if (dates == NULL) return 1;

    printf("Enter dates (day month year):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &dates[i].day, &dates[i].month, &dates[i].year);
    }

    printf("\nBefore sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%02d.%02d.%04d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    qsort(dates, n, sizeof(*dates), compare_day);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%02d.%02d.%04d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    free(dates);
    return 0;
}
