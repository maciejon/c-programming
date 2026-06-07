#include <stdio.h>
#include "days.h"

int main() {
    DAY d1 = {12, 12, 1234};
    DAY d2 = {20, 1, 1410};
    DAY d3 = {31, 10, 1972};
    DAY d4 = {1, 1, 1582};
    DAY d5 = {31, 12, 1582};

    printf("12.12.1234 - 20.01.1410 - %d days\n", days(d1, d2));
    printf("12.12.1234 - 31.10.1972 - %d days\n", days(d1, d3));
    printf("31.10.1972 - 20.01.1410 - %d days\n", days(d3, d2));
    printf("01.01.1582 - 31.12.1582 - %d days\n", days(d4, d5));

    return 0;
}