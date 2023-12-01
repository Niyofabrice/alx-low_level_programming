#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hashtable
 * @key: the key
 * Return: the value or otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}

	ptr = ht->array[index];
	while (ptr && ht->array[index])
	{
		ptr = ptr->next;
	}
	
	if (ptr == NULL)
		return (NULL);
	return (ptr->value);
}
