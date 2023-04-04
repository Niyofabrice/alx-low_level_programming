#include "main.h"
#include <stdlib.h>
/**
 * _memset - function that the memory with a constant byte
 * @s: the pointer
 * @b: the constant byte
 * @n: the bytes of memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
s = malloc(n*sizeof(char));
for (int i; i <= n; i++)
{
s[i] = b;
}
free(s);
return (s);
}
