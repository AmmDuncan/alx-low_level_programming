#include "hash_tables.h"

/**
 * shash_table_create - Create sorted hash table
 *
 * @size: size of table
 * Return: pointer to created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;

	table = malloc(sizeof(shash_table_t));

	if (table == NULL || !size)
	{
		return (NULL);
	}

	array = malloc(sizeof(shash_node_t *) * size);
	table->size = size;
	table->array = array;

	if (!array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
