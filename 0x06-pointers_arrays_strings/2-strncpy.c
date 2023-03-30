#include "main.h"
/**
 * _strncpy - a function that copys a string
 * @dest: variable 1
 * @src: variable 2
 * @n: variable 3
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
