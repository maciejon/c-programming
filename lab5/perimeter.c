#include <stdio.h>
#include <math.h>
#include "point.h"

float perimeter(POINT a, POINT b, POINT c){
    return distance(a,b) + distance(b,c) + distance(a,c);
}
