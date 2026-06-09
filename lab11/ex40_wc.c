#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    int print_lines = 1, print_words = 1, print_chars = 1;
    char *filename = NULL;

    if (argc == 2) {
        filename = argv[1];
    } else if (argc == 3) {
        if (strcmp(argv[1], "-l") == 0) {
            print_words = 0; print_chars = 0;
        } else if (strcmp(argv[1], "-w") == 0) {
            print_lines = 0; print_chars = 0;
        } else if (strcmp(argv[1], "-c") == 0) {
            print_lines = 0; print_words = 0;
        } else {
            printf("Usage: ex40_wc [-l | -w | -c] file\n");
            return 1;
        }
        filename = argv[2];
    } else {
        printf("Usage: ex40_wc [-l | -w | -c] file\n");
        return 1;
    }

    FILE *in = fopen(filename, "r");
    if (in == NULL) {
        perror(filename);
        return 1;
    }

    int ch;
    int lines = 0, words = 0, chars = 0;
    int in_word = 0;

    while ((ch = fgetc(in)) != EOF) {
        chars++;
        
        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(in);

    if (print_lines && print_words && print_chars) {
        printf(" %d %d %d %s\n", lines, words, chars, filename);
    } else if (print_lines) {
        printf("%d %s\n", lines, filename);
    } else if (print_words) {
        printf("%d %s\n", words, filename);
    } else if (print_chars) {
        printf("%d %s\n", chars, filename);
    }

    return 0;
}
