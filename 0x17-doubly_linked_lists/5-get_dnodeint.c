#include "lists.h"

/**
 * get_dnodeint_at_index - get node at given index
 * @head: points to head of list
 * @index: index to return
 * Return: pointer to matching node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int tracker;
	dlistint_t *cur;

	tracker = 0;
	cur = head;

	while (cur != NULL && tracker != index)
	{
		tracker++;
		cur = cur->next;
	}

	if (tracker == index)
		return (cur);

	return (NULL);
}
