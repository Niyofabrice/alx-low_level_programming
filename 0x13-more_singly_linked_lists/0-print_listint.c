#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the starting node
 * Return: number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t count;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
