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

/**
 * shash_table_set - Set value in sorted hash table
 *
 * @ht: pointer to hash table
 * @key: key hash for index
 * @value: value to store at index
 * Return: 1 on success, 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int index;
	shash_node_t *node;
	shash_node_t *cur;

	node = malloc(sizeof(shash_node_t));
	if (!ht || !key || !node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		cur = ht->array[index];
		if (strcmp(cur->key, key) == 0)
			sset_and_free(node, cur, value);
		else
		{
			while (cur && cur->next)
			{
				if (strcmp(cur->key, key) == 0)
				{
					sset_and_free(node, cur, value);
					return (1);
				}
				cur = cur->next;
			}
			if (strcmp(cur->key, key) == 0)
				sset_and_free(node, cur, value);
			else
				set_at_index(ht, index, node, cur);
		}
	}
	else
		set_at_index(ht, index, node, NULL);
	return (1);
}

/**
 * sset_and_free - Set value on current and free node
 *
 * @node: node to free
 * @cur: node to set value on
 * @value: value to set
 */
void sset_and_free(shash_node_t *node, shash_node_t *cur,
		   const char *value)
{
	free(cur->value);
	cur->value = strdup(value);
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * set_at_index - Set node at index and update ht
 *
 * @ht: sorted hash table
 * @index: index to put node
 * @node: node to insert at index
 * @cur: last node in linked list
 */
void set_at_index(shash_table_t *ht,
		  int index,
		  shash_node_t *node,
		  shash_node_t *cur)
{
	node->sprev = ht->stail;
	if (ht->shead == NULL)
		ht->shead = node;
	if (ht->stail != NULL)
		ht->stail->snext = node;
	ht->stail = node;
	if (cur == NULL)
		ht->array[index] = node;
	else
		cur->next = node;
}
