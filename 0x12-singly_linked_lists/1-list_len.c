#include "lists.h"

/**
 * list_len - get length of a list
 * @h: pointer to head of list
 * Return: lenth of list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *current = (list_t *)h;

	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}

