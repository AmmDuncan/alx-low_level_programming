#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: points to table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size;
	hash_node_t *node, *prev;

	if (!ht)
		return;

	size = ht->size;

	for (i = 0; i < size; i++)
	{
		prev = node = ht->array[i];

		if (node)
			while (node)
			{
				prev = node;
				node = node->next;
				free(prev);
			}
	}

	free(ht);
}
