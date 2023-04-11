#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: unsigned int
 * @c: a charater variable
 * Return: NULL if size = 0 or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = *malloc(size * sizeof(char));
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c[i];
		i++;
	}
	return (*p);
}
