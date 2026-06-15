#include <stdio.h>
#include "text.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s input output\n", argv[0]);
        return 1;
    }

    int size = 0;
    char **lines = f_load(argv[1], &size);

    if (lines == NULL) {
        printf("Error: Could not load the file.\n");
        return 1;
    }

    f_save(argv[2], size, lines);
    f_free(size, lines);

    return 0;
}
