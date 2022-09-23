#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of table
 * Return: hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *array;

	table = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t) * size);

	if (table == NULL || !size)
		return (NULL);

	table->size = size;
	table->array = &array;
	return (table);
}
