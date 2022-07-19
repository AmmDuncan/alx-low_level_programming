#include "lists.h"

/**
 * listint_len - get length of a linked list
 * @h: head of linked list
 * Return: length of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t *current = (listint_t *)h;

	if (!h)
		return (-1);

	while (current)
	{
		count += 1;
		current = current->next;
	}

	return (count);
}
