#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to define a dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: proprietaire of a dog
 *
 * Description : structure dog create an objet dog with many caracteristique
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* init_dog prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* print_dog prototype */
void print_dog(struct dog *d);
#endif /* DOG_H */
