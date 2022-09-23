#include "hash_tables.h"

/**
 * hash_table_print - print elements in a hash table
 *
 * @ht: table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (!first)
				printf(", ");

			first = 0;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
