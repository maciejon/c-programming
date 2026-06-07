#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the square: ");
    scanf("%d", &height);

    for (int i = 0; i<height; i++){
        if(i == 0 || i == height - 1){
            for (int j = 0; j < height; j++){
                printf("*");
            }
        }
        else {
            for (int j = 0; j < height; j++){
                if(j == 0 || j == height - 1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
        }
    }
        printf("\n");
    }

    return 0;
}