#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatinates two strings
 * @s1: string value 1
 * @s2: string value 2
 * Return: an empty string or content of s1 followed by the content of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int i = 0;
	int j = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		i++;
	}
	x = malloc(sizeof(char) * i);
	if (x == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != 0)
	{
		x[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		x[i] = s2[j];
		i++;
		j++;
	}
	return (x);
}
