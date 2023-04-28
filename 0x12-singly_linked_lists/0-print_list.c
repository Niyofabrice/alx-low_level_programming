#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the allocated memory
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int x = 0;

	while (temp != 0)
	{
		if (temp->str == 0)
		{
			printf("[0} (nil)");
		}
		printf("[%u] %ls", &temp->len, temp->str);
		temp = temp->next;
		++x;
	}
	return (x);
}
