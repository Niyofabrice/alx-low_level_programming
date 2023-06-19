#include "main.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct to print
 */

void print_dog(struct dog *d)
{
	if (d->name == '\0')
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == '\0')
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %s\n", d->age);
	}
	if (d->owner == '\0')
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
