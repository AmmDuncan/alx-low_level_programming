#include "hash_tables.h"

/**
 * hash_table_set - Add element to hash table
 * @ht: table to add value to
 * @key: key of value to add to hash table
 * @value: value to store in hash table
 * Return: 1 if successful, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node;

	if (!ht || !ht->array)
		return (0);

	node = malloc(sizeof(hash_node_t));

	node->key = (char *)key;
	node->value = (char *)value;

	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = node;

	return (1);
}
