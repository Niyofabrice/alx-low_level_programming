#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as a parameter
 * @array: the array to execute the function on
 * @size: size of the array
 * @action: function to be executed on the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr = array, i;

	for (i = 0; i < size; i++)
	{
		action(ptr + i);
	}
}
