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
	unsigned int len = 0, count = 0;

	dummy = *head;
	target = *head;
	prev = NULL;
	if (head == NULL || *head == NULL)
		return (-1);
	while (dummy != NULL)
	{
		len++;
		dummy = dummy->next;
	}
	if (index >= len)
		return (-1);
	while (target != NULL && count != index)
	{
		count++;
		prev = target;
		target = target->next;
	}
	if (index == 0 && *head != NULL)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	if (count == index && target != NULL)
	{
		if (target->next != NULL)
			target->next->prev = prev;
		if (prev != NULL)
			target->prev->next = target->next;
		free(target);
		return (1);
	}
	return (-1);
}
