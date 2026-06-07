#include <stdio.h>

int main(){
    printf ("Code\tCharacter\n");
    for (int i = 33; i <= 126; i++) {
        printf("%d\t%c\n", i, i);
    }
}