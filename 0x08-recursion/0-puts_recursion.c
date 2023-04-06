#include "main.h"
/**
 * _puts_recursion - a function that prints a string followed by a new line
 * @s: the variable
 * Return: 0
 */
void _puts_recursion(char *s)
{
int l;
int i;
l = strlen(s);
for (i = 0; i <= l; i++)
{
printf("%d", s[i]);
}
printf("\n");
return (0);
}
