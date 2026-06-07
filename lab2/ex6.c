#include <stdio.h>

int main()
{
    int c;
    double f;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);

    f = c * 9.0 / 5.0 + 32;

    printf("Celsius: %d\n", c);
    printf("Fahrenheit: %.2f\n", f);

    return 0;
}
