#ifndef MAIN_H
#define MAIN_H

/* _putchar prototype */
int _putchar(char);

/* create_array prototype */
char *create_array(unsigned int size, char c);

/* _strdup prototype */
char *_strdup(char *str);

/* str_concat prototype */
char *str_concat(char *s1, char *s2);

/* prototype alloc grid */
int **alloc_grid(int width, int height);

/* free  grid prototype */
void free_grid(int **grid, int height);

/* args to string prototype */
char *argstostr(int ac, char **av);
#endif /* MAIN_H */
