#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - create a new dog
 * @d: structure of dog
 * 
 */
void free_dog(dog_t *d)
{
	free(d);
}

