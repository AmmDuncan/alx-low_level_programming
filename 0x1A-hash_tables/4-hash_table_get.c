#include "hash_tables.h"

/**
 * hash_table_get - Get value for key in hash_table
 * @ht: table to search key in
 * @key: key to search in table
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *cur;

	index = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[index];

	if (!cur)
		return (NULL);

	if (!strcmp(cur->key, key))
	{
		return (cur->value);
	}
	else
	{
		while (cur->next)
		{
			if (!strcmp(cur->key, key))
			{
				return (cur->value);
			}
			cur = cur->next;
		}
	}

	return (NULL);
}
