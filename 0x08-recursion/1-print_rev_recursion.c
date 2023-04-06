#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function that a string in reverse
 * @s: the pointer variable
 * Return: non
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
printf("%c", *s);
}
