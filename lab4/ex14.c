#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount in PLN: ");
    scanf("%d", &amount);

    int found = 0;

    for (int i = amount / 100; i >= 0; i--) {
        int remaining_after_100 = amount - (i * 100);
        
        for (int j = remaining_after_100 / 50; j >= 0; j--) {
            int remaining_after_50 = remaining_after_100 - (j * 50);

            if (remaining_after_50 % 20 == 0) {
                int k = remaining_after_50 / 20;
                printf("%d PLN = %d*100 + %d*50 + %d*20\n", amount, i, j, k);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No valid decomposition found for %d PLN.\n", amount);
    }

    return 0;
}