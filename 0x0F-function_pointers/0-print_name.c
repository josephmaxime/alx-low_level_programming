#include <stdio.h>
#include <stdlib.>

/**
 * print_name - print a name function
 * 
 * @name: name to printed
 * @f: function who print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
