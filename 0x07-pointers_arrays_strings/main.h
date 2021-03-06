#ifndef MAIN_H
#define MAIN_H

/* putchar */
int _putchar(char);

/* _memset */
char *_memset(char *s, char b, unsigned int n);

/* copy memory */
char *_memcpy(char *dest, char *src, unsigned int n);

/* search char in string */
char *_strchr(char *s, char c);

/* get length of a substring */
unsigned int _strspn(char *s, char *accept);

/* search a string of a bytes */
char *_strpbrk(char *s, char *accept);

/* locate substring */
char *_strstr(char *haystack, char *needle);

/* prints chessboard */
void print_chessboard(char (*a)[8]);

/* sum of diagonal of array of two dimensions */
void print_diagsums(int *a, int size);

/* set the value */
void set_string(char **s, char *to);



#endif /* MAIN_H */
