#include <stdio.h>
#include <math.h>
#include "point.h"

float distance(POINT a, POINT b){
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}