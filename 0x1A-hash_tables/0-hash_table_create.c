#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_node_t) * size);
	if (ht == NULL)
	{
		return(NULL);
	}
	free(ht);
	return(ht);
}
