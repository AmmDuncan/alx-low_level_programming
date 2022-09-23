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
	hash_node_t *cur;
	hash_node_t *head;

	node = malloc(sizeof(hash_node_t));
	if (!ht || !key || !node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		cur = ht->array[index], head = ht->array[index];
		if (!strcmp(cur->key, key))
			set_and_free(node, cur, value);
		else
		{
			while (cur && cur->next)
			{
				if (!strcmp(cur->key, key))
				{
					set_and_free(node, cur, value);
					return (1);
				}
				cur = cur->next;
			}
			if (!strcmp(cur->key, key))
				set_and_free(node, cur, value);
			else
			{
				node->next = head;
				ht->array[index] = node;
			}
		}
	}
	else
		ht->array[index] = node;
	return (1);
}

/**
 * set_and_free - Set value on current and free node
 *
 * @node: node to free
 * @cur: node to set value on
 * @value: value to set
 */
void set_and_free(hash_node_t *node, hash_node_t *cur,
		  const char *value)
{
	cur->value = strdup(value);
	free(node);
}
