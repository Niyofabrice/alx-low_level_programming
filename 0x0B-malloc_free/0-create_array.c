#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: a charater variable
 * Return: NULL if size = 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
