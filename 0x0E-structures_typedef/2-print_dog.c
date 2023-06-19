#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == NULL)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
