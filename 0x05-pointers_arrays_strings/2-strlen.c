#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: variable to store the string
 * Return: 0(Success)
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
