#include "lists.h"

/**
 * sum_dlistint - sum items in a list
 * @head: points to head of list
 *
 * Return: sum of all numbers in list
 */
int sum_dlistint(dlistint_t *head)
{
	int total;
	dlistint_t *cur;

	cur = head;
	total = 0;

	while (cur != NULL)
	{
		total += cur->n;
		cur = cur->next;
	}

	return (total);
}
