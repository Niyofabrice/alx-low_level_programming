#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to find the square root for
 * Return: -1 or the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int y;
	int e = 0.00001;

	y = ((n - 1) + (n / (n - 1)) / 2;
	if ((n - 1) - y < e && y - (n - 1) < e)
	{
		return (y);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
