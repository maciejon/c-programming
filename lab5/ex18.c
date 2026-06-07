#include <stdio.h>
#include <math.h>
#include "point.h"


int main() {
POINT p1;
p1.x = 1.0;
p1.y = 2.0; 

POINT p2;
p2.x = 0.0;
p2.y = 0.0; 

POINT p3;
p3.x = 2.0;
p3.y = 0.0;

float perim = perimeter(p1,p2,p3);
printf("%f",perim);

float areaa = area(p1,p2,p3);
printf("%f",areaa);
}