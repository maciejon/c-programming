#ifndef TEXT_H
#define TEXT_H

int f_lines(const char *name);
char **f_load(const char *name, int *size);
int f_save(const char *name, int size, char *tab[]);
void f_free(int size, char *tab[]);

#endif
