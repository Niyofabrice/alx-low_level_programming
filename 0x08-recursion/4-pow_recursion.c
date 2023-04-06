#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - function that returns the pwoer of x power y
 * @x: the variable to be powered
 * @y: the variable that store the number to power
 * Return: -1 or the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
