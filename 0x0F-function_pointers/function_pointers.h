#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
/* prototype of print_name */
void print_name(char *name, void (*f)(char *));
#endif
