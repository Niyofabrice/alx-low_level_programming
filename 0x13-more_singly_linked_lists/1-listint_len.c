#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to a node
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
