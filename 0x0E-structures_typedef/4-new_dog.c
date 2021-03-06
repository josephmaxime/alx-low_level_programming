#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(owner);
		free(name);
		free(d);
		return (NULL);
	}
	if (name == NULL)
	{
		free(owner);
		free(d);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(name);
		free(d);
		return (NULL);
	}
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;
	return (d);
}

