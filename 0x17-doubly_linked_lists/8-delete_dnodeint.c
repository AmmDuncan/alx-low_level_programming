#include "lists.h"

/**
 * delete_dnodeint_at_index - remove node from list
 * @head: pionts to pointer to head
 * @index: position to remove item
 * Return: 1 if successful -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target, *prev, *dummy;
	unsigned int len, count;

	dummy = *head;
	target = *head;
	prev = NULL;
	len = 0;
	count = 0;

	while (dummy != NULL)
	{
		len++;
		dummy = dummy->next;
	}
	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		return (1);
	}
	if (index >= len)
		return (-1);
	while (target != NULL && count != index)
	{
		count++;
		prev = target;
		target = target->next;
	}
	if (count == index)
	{
		if (target != NULL && target->next != NULL)
			target->next->prev = prev;
		if (target != NULL && prev != NULL)
			target->prev->next = target->next;

		return (1);
	}
	return (-1);
}
