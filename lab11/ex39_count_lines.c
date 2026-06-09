#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ex39_count_lines file\n");
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    if (in == NULL) {
        perror(argv[1]);
        return 1;
    }

    int ch;
    int lines = 0;
    int last_ch = '\n';

    while ((ch = fgetc(in)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
        last_ch = ch;
    }

    if (last_ch != '\n' && last_ch != EOF) {
        lines++;
    }

    fclose(in);

    printf("file: %s contains %d lines.\n", argv[1], lines);
    return 0;
}
