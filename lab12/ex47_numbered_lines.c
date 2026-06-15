#include <stdio.h>
#include "text.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s file.txt\n", argv[0]);
        return 1;
    }

    int size = 0;
    char **lines = f_load(argv[1], &size);

    if (lines == NULL) {
        printf("Error: Could not load the file.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d: %s", i + 1, lines[i]);
        
        int len = 0;
        while (lines[i][len] != '\0') {
            len++;
        }
        if (len > 0 && lines[i][len - 1] != '\n') {
            printf("\n");
        }
    }

    f_free(size, lines);

    return 0;
}
