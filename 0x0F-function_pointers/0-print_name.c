#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to the name
 * @f: function pointer that i dont know what it does
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
