#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 * @size: stores the size to be allocated
 * @c: characters to be initialized to
 * Return: (0) or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (*ar);
}
