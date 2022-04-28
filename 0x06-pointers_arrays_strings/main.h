#ifndef MAIN_H
#define MAIN_H

/* _putchar */
int _putchar(char);

/* _strcat */
char *_strcat(char *dest, char *src);

/* concatenates string with length */
char *_strncat(char *dest, char *src, int n);

/* copy string */
char *_strncpy(char *dest, char *src, int n);

/* compares string */
int _strcmp(char *s1, char *s2);

/* reverse word */
void reverse_array(int *a, int n);

/* lowercase to uppercase */
char *string_toupper(char *str);

/* capitalize all world */
char *cap_string(char *);

/* leet */
char *leet(char *);

/* rot13 */
char *rot13(char *s);
#endif /* MAIN_H */
