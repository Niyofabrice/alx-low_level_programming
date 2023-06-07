#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number that is squared
 * Return: (-1)if its not a perfect square or return the answer
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (_sqrthelper(n, 0));
}
/**
 * _sqrthelper - function that helps the square root function
 * @n: the number its self
 * @x: the iterator
 * Return: answer
 */

int _sqrthelper(int n, int x)
{
	if (n < 1 || (x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	else
	{
		x++;
		return (_sqrthelper(n, (x + 1)));
	}
}
