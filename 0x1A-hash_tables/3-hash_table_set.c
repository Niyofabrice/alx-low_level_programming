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
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	hash_node_t *ptr = ht->array[index];

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (0);
	node->key = key;
	node->value = value_copy;
	node->next = NULL;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = node;
	return (1);
}
