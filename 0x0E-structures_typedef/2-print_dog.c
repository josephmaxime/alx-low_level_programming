#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print structure of dog
 * @d: structure dog
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d == NULL)
	{
	}
	else
	{
		if ((*d).name == NULL)
			(*d).name = nil;
		if ((*d).owner == NULL)
			(*d).name = nil;
		printf("Name: %s\nAge: %d\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

