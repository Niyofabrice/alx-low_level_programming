#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the key
 * Return: 1 - if it succeded, 0 - otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *node;

	if (key == NULL)
	{
		return (0);
	}

	index = hash_djb2(key);

	if (ht[index]->key == NULL)
	{
		ht[index]->key = key;
		ht[index]->value = value;
	}
	else
	{
		hash_node_t *ptr = ht[index];

		node = malloc(sizeof(hash_node_t *));
		node->key = key;
		node->value = value;
		node->next = NULL;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	return (1);
}
