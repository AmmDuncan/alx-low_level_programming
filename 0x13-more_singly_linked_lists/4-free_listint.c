#include "lists.h"

/**
 * free_listint - free memory used by a linked lisst
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	if (head == NULL)
		return;

	while (current)
	{
		listint_t *temp = current->next;

		free(current);
		current = temp;
	}
}
