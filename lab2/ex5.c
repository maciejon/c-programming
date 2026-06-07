#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter the expression: ");
    scanf("%d%c%d", &a, &op, &b);

    switch (op) {
    case '+':
        printf("Result: %d\n", a + b);
        break;
    case '-':
        printf("Result: %d\n", a - b);
        break;
    case '*':
        printf("Result: %d\n", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("Result: %d\n", a / b);
        }
        break;
    default:
        printf("Error: Unsupported operator\n");
        break;
    }

    return 0;
}
