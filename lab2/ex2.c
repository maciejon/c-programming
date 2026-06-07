#include <stdio.h>

int main()
{
    int a, b, c, d;
    int sum;

    printf("Enter 4 values");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        printf("Please enter four valid integers.\n");
        return 1;
    }

    sum = a + b + c + d;

    printf("%4d\n", a);
    printf("%4d\n", b);
    printf("%4d\n", c);
    printf("%4d\n", d);

    printf("----\n");
    printf("%4d\n", sum);

    return 0;
}
