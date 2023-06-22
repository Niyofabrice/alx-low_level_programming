#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of arguments
 * Return: the sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_list args;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum = sum + num;
	}
	return (sum);
	va_end(args);
}
