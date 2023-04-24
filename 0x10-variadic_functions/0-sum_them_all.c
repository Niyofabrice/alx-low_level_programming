#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of al its parameters
 * @n: number of parameters passed to the function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;
	va_list args;
	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
