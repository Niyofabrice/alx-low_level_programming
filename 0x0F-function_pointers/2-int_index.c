#include "function_pointers.h"

/**
 * int_index - function that seacheres for an integer
 * @array: array to search from
 * @size: number of elements inthe array
 * @cmp: function to compare the integers
 * Return: 0/-1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	int i;

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 0)
		{
			return (-1);
		}
		else
		{
			return (i);
		}
	}
}