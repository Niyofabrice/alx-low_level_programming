#include "main.h"

/**
 * _puts_recursion - Function that prints a string followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
