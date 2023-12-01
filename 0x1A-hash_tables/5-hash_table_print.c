#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	unsigned char comma;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ht->key, ht->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
