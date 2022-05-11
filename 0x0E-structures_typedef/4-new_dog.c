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

	/* d = malloc(sizeof(struct dog)); */
	d->name = (char *)malloc(sizeof(char *));
	/* d->age = (float)malloc(sizeof(float));*/
	d->owner = (char *)malloc(sizeof(char *));
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		/* free(d->age); */
		return (NULL);
	}
	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;
	return (d);
}

