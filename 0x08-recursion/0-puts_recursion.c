#include "main.h"

/** _sqrt - function that returns the natural square root of a number
 * @n: the number that is squared
 * Return: (-1)if its not a perfect square or return the answer
 */

int x = 1;

int _sqrt(int n)
{
	if (n < 1 || (x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	else{
		x++;
		return (_sqrt(n));
	}
}
