#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - Function that returns 1 if the input is a prime number
 * @n: the number
 * Return: (1) if its a prime number or (0) otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that checks if a number is a prime number
 * @n: the number
 * @x: the iterator
 * Return: (1) or (0)
 */

int actual_prime(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (actual_prime(n, x - 1));
}
