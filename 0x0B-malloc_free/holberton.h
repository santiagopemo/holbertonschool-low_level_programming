#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#define UNUSED(x) (void)(x)
char *str_concat(char *s1, char *s2);
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
