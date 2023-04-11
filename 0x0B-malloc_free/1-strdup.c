#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that duplicates a string to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *fab;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	fab = malloc(sizeof(char) * (i + 1));

	if (fab == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		fab[r] = str[r];
	}
	return (fab);
}
