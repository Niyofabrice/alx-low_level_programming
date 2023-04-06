#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - function that a string in reverse
 * @s: the pointer variable
 * Return: non
 */
void _print_rev_recursion(char *s)
{
int i;
i = strlen(s);
if (*s == '\0')
{
return;
}
printf("%c", s[i]);
_print_rev_recursion(s + 1);
i--;
}
