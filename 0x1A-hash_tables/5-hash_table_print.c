#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr;
	char *comma = "";

	if (!ht || !ht->array)
		return;

	printf("{");
	while (i < ht->size)
	{
		ptr = ((ht->array)[i]);
		while (ptr)
		{
			printf("%s'%s': '%s'", comma, ptr->key, ptr->value);
			comma = ", ";
			ptr = ptr->next;
		}
		i++;
	}
	printf("}\n");
}
