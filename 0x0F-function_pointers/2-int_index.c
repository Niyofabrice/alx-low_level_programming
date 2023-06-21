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
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1)
}
