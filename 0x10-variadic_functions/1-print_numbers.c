#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (seperator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
