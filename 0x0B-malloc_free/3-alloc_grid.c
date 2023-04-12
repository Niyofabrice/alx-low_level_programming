#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - function that return a pointer to a 2 dimensional integer array
 * @width: number of rows
 * @height: number of columns
 * Return: null if width or heigth is <=0 or when function failes or pointer
 */
int **alloc_grid(int width, int height)
{
	int **fab;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	fab = malloc(sizeof(int *) * height);
	if (fab == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		fab[i] = malloc(sizeof(int) * width);
		if (fab[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(fab[i]);
			}
			free(fab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			fab[i][j] = 0;
		}
	}
	return (fab);
}
