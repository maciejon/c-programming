#include <stdio.h>

long long fib_iterative(int n) {
    if (n <= 2) return 1;
    long long a = 1, b = 1, temp;
    for (int i = 3; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

long long fib_recursive(int n) {
    if (n <= 2) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main() {
    int n;
    printf("Enter the element number n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a valid integer greater than 0.\n");
        return 1;
    }

    printf("Iterative version: a_%d = %lld\n", n, fib_iterative(n));
    printf("Recursive version: a_%d = %lld\n", n, fib_recursive(n));

    return 0;
}