#include "days.h"

static int is_gregorian(DAY d) {
    if (d.year > 1582) return 1;
    if (d.year < 1582) return 0;
    if (d.month > 10) return 1;
    if (d.month < 10) return 0;
    return d.day >= 15;
}

static int is_leap(int year, int is_greg) {
    if (is_greg) {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    } else {
        return (year % 4 == 0);
    }
}

static int is_valid_date(DAY d) {
    if (d.year <= 0 || d.month < 1 || d.month > 12 || d.day < 1) return 0;

    if (d.year == 1582 && d.month == 10 && d.day > 4 && d.day < 15) return 0;

    int greg = is_gregorian(d);
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap(d.year, greg)) {
        days_in_month[1] = 29;
    }

    if (d.day > days_in_month[d.month - 1]) return 0;

    return 1;
}

static int date_to_absolute_days(DAY d) {
    int greg = is_gregorian(d);
    int y = d.year - 1;
    int absolute_days = 0;

    if (greg) {
        absolute_days = y * 365 + y / 4 - y / 100 + y / 400;
    } else {
        absolute_days = y * 365 + y / 4;
    }

    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    if (is_leap(d.year, greg)) {
        days_in_month[1] = 29;
    }

    for (int i = 0; i < d.month - 1; i++) {
        absolute_days += days_in_month[i];
    }
    absolute_days += d.day;

    if (greg) {
        absolute_days += 2;
    }

    return absolute_days;
}

int days(DAY a, DAY b) {
    if (!is_valid_date(a) || !is_valid_date(b)) {
        return -1;
    }

    int abs_a = date_to_absolute_days(a);
    int abs_b = date_to_absolute_days(b);

    int diff = abs_a - abs_b;
    
    return diff < 0 ? -diff : diff;
}