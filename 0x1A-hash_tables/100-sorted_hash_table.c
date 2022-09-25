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
	node->snext = ht->shead;
	if (ht->shead != NULL)
		ht->shead->sprev = node;
	if (ht->stail == NULL)
		ht->stail = node;
	ht->shead = node;
	if (cur == NULL)
		ht->array[index] = node;
	else
		cur->next = node;
}

/**
 * shash_table_get - Get value for key in hash_table
 * @ht: table to search key in
 * @key: key to search in table
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *cur;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[index];

	if (cur == NULL)
		return (NULL);

	if (!strcmp(cur->key, key))
		return (cur->value);

	while (cur != NULL)
	{
		if (!strcmp(cur->key, key))
			return (cur->value);

		cur = cur->next;
	}

	return (NULL);
}

/**
 * shash_table_print - print elements in a hash table
 *
 * @ht: table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	node = ht->shead;
	while (node)
	{
		if (!first)
			printf(", ");

		first = 0;
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print elements in a hash table
 *
 * @ht: table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (!first)
			printf(", ");

		first = 0;
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete a hash table
 * @ht: points to table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *prev;

	if (!ht)
		return;

	prev = node = ht->shead;

	if (node != NULL)
		while (node)
		{
			prev = node;
			node = node->snext;
			free(prev->key);
			free(prev->value);
			free(prev);
		}

	free(ht->array);
	free(ht);
}
