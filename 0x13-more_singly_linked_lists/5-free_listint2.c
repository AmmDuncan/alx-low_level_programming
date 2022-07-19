#include "lists.h"

/**
 * free_listint2- free memory used by a linked lisst
 * @head: pointer to head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *head_l = *head;

	if (head == NULL)
		return;

	current = head_l->next;
	*head = NULL;

	while (current)
	{
		listint_t *temp = current->next;

		free(current);
		current = temp;
	}
}
