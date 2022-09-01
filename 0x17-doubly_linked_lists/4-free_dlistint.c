#include "lists.h"

/**
 * free_dlistint - free space used by list
 * @head: points to head of list
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *cur, *holder;

	cur = h;

	while (cur != NULL)
	{
		holder = cur->next;
		free(cur);
		cur = holder;
	}
}
