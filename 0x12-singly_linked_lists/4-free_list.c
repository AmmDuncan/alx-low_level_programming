#include "lists.h"

/**
 * free_list - free memory for a linked list
 * @head: first node in linked list
 */
void free_list(list_t *head)
{
	list_t *current = head;

	if (!head)
		return;

	while (current->next)
	{
		list_t *temp = current;

		free(current->str);
		free(current);
		current = temp->next;
	}

	free(current->str);
	free(current);
}
