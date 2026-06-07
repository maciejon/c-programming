#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}POINT;

float distance(POINT a, POINT b);
float perimeter(POINT a, POINT b, POINT c);
float area(POINT a, POINT b, POINT c);

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

float distance(POINT a, POINT b){
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

float perimeter(POINT a, POINT b, POINT c){
    return distance(a,b) + distance(b,c) + distance(a,c);
}

float area(POINT a, POINT b, POINT c){
    return fabs(a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y)) / 2;
}