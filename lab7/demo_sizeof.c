#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("sizeof(p)  = %zu\n", sizeof(p));
    printf("sizeof(*p) = %zu\n", sizeof(*p));

    return 0;
}