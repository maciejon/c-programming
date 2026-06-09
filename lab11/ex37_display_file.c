#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Usage: ex37_display_file file\n");
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    if (in == NULL) {
        perror(argv[1]);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        putchar(ch);
    }

    fclose(in);
    return 0;
}
