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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
