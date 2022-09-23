#include "hash_tables.h"

/**
 * hash_table_print - print elements in a hash table
 *
 * @ht: table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (!first)
				printf(", ");

			while (node)
			{
				first = 0;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
