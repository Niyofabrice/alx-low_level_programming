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
printf("%c", s[i]);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
return;
}
}
