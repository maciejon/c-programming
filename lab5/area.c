#include <stdio.h>
#include <math.h>
#include "point.h"

float area(POINT a, POINT b, POINT c){
    return fabs(a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y)) / 2;
}