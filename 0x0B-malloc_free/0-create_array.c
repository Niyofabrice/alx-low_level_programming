#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * @size: stores the size to be allocated
 * @c: characters to be initialized to
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
