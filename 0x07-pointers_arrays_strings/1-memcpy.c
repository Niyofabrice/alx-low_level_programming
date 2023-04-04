#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: where the memory will be copied to
 * @src: where the memory will be copied from
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
dest[i] = src[i];
n--;
}
}
