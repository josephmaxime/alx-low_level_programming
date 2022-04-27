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
char *strpbrk(char *s, char *accept);

#endif /* MAIN_H */
