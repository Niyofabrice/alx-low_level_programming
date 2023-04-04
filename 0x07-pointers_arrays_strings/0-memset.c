#include "main.h"
/**
 * _memset - function that the memory with a constant byte
 * @s: the pointer
 * @b: the constant byte
 * @n: the bytes of memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
for (int i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
