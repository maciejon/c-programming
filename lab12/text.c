#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "text.h"

int f_lines(const char *name) {
    FILE *f = fopen(name, "r");
    if (f == NULL) {
        return -1;
    }

    int count = 0;
    int c;
    int last_char = '\n';

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            count++;
        }
        last_char = c;
    }

    if (last_char != '\n' && last_char != EOF) {
        count++;
    }

    fclose(f);
    return count;
}

char **f_load(const char *name, int *size) {
    int lines = f_lines(name);
    if (lines < 0) {
        return NULL;
    }

    char **tab = malloc(lines * sizeof(char *));
    if (tab == NULL) {
        return NULL;
    }

    FILE *f = fopen(name, "r");
    if (f == NULL) {
        free(tab);
        return NULL;
    }

    char buffer[1024];
    int i = 0;

    while (fgets(buffer, sizeof(buffer), f) != NULL && i < lines) {
        tab[i] = malloc(strlen(buffer) + 1);
        if (tab[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(tab[j]);
            }
            free(tab);
            fclose(f);
            return NULL;
        }
        strcpy(tab[i], buffer);
        i++;
    }

    *size = i;
    fclose(f);
    return tab;
}

int f_save(const char *name, int size, char *tab[]) {
    FILE *out = fopen(name, "w");
    if (out == NULL) {
        return -1;
    }

    int written = 0;
    for (int i = 0; i < size; i++) {
        if (fputs(tab[i], out) >= 0) {
            written++;
        }
    }

    fclose(out);
    return written;
}

void f_free(int size, char *tab[]) {
    if (tab == NULL) {
        return;
    }

    for (int i = 0; i < size; i++) {
        free(tab[i]);
    }

    free(tab);
}
