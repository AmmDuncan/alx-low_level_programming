#include "lists.h"

/**
 * insert_dnodeint_at_index - add node to list at given position
 * @h: points to pointer to head of list
 * @idx: index to insert node
 * @n: number to insert in list
 * Return: address to newly added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count, len;
	dlistint_t *target, *newnode, *prev, *end;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL || h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	target = *h;
	count = 0;
	prev = NULL;
	end = *h;
	len = 0;
	while (end != NULL)
	{
		end = end->next;
		len++;
	}
	while (target != NULL && count != idx)
	{
		count++;
		prev = target;
		target = target->next;
	}
	if (len == idx)
		return (add_dnodeint_end(h, n));
	else if (count < idx)
		return (NULL);
	if (count == idx && target != NULL)
	{
		newnode->n = n;
		newnode->next = target;
		newnode->prev = prev;
		if (target != NULL)
			target->prev = newnode;
		if (prev != NULL)
			prev->next = newnode;
		return (newnode);
	}
	return (NULL);
}
