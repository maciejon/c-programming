#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ex41_line_endings file\n");
        return 1;
    }

    FILE *in = fopen(argv[1], "r");
    if (in == NULL) {
        perror(argv[1]);
        return 1;
    }

    int unix_lf = 0;
    int win_crlf = 0;
    int mac_cr = 0;
    int ch;

    while ((ch = fgetc(in)) != EOF) {
        if (ch == '\n') {
            unix_lf++;
        } else if (ch == '\r') {
            int next_ch = fgetc(in);
            if (next_ch == '\n') {
                win_crlf++;
            } else {
                mac_cr++;
                if (next_ch != EOF) {
                    ungetc(next_ch, in);
                }
            }
        }
    }

    fclose(in);

    printf("%s: ", argv[1]);
    
    if (unix_lf > 0 && win_crlf == 0 && mac_cr == 0) {
        printf("UNIX\n");
    } else if (win_crlf > 0 && unix_lf == 0 && mac_cr == 0) {
        printf("WINDOWS\n");
    } else if (mac_cr > 0 && unix_lf == 0 && win_crlf == 0) {
        printf("OLD_MAC\n");
    } else if (unix_lf == 0 && win_crlf == 0 && mac_cr == 0) {
        printf("UNKNOWN\n");
    } else {
        printf("MIXED\n");
    }

    return 0;
}
