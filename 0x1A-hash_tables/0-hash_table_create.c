#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of table
 * Return: hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	return (table);
}

