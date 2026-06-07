#include <stdio.h>

void function() {
    static int count = 0;
    count++;
    printf("Function has been called %d time(s)\n", count);
}

int main() {
    for (int i = 0; i < 5; i++) {
        function();
    }

    return 0;
}