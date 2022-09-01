#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: points to head of list
 *
 * Description: find and return lenght of doubly linked list
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *cur;

	if (h == NULL)
		return (0);

	size = 0;
	cur = h;

	while (cur)
	{
		cur = cur->next;
		size++;
	}

	return (size);
}
