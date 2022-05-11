#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init structure of dog
 * @d: structure dog
 * @name: name to init name of dog
 * @age: age to init age of dog
 * @owner: owner to init owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit();
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

