#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - a function that prints a string followed by a new line
 * @s: the variable
 * Return: non
 */
void _puts_recursion(char *s)
{
int l;
int i = 0;
l = strlen(s);
if (i < l)
{
printf("%d", s[i]);
_puts_recursion(s);
}
i++;
_putchar('\n');
}
