#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to the struct
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = *name;
	d->age = age;
	d->owner = *owner;
}
