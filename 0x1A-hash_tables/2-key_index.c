#include "hash_tables.h"

/**
 * key_index - Get index of key in a hash_table
 * @key: key to find index for
 * @size: size of hash_table
 * Return: index of value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

