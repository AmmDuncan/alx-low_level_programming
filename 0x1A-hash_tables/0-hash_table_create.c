#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of table
 * Return: hash_table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *head_node;

	table = malloc(sizeof(hash_table_t));
	head_node = malloc(sizeof(hash_node_t));

	if (table == NULL || head_node == NULL || !size)
		return (NULL);

	table->size = size;
	table->array = &head_node;
	return (table);
}

