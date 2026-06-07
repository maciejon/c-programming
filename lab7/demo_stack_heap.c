#include <stdio.h>
#include <stdlib.h>

void demo_stack(int n) {
    int a[10];
    int b[n];

    printf("sizeof(a) = %zu\n", sizeof(a));
    printf("sizeof(b) = %zu\n", sizeof(b));
}

void demo_heap(int n) {
    int *p = malloc(n * sizeof(*p));

    if (p == NULL) {
        printf("Allocation failed\n");
        return;
    }

    printf("sizeof(p) = %zu\n", sizeof(p));

    free(p);
    p = NULL;
}

int main(void) {
    demo_stack(5);
    demo_heap(5);
    return 0;
}