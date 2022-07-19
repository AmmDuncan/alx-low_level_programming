#include "lists.h"

/**
 * add_nodeint_end - add node to end of linked list
 * @head: pointer to head of the linked list
 * @n: new item to add to end of linked list
 * Return: pointer the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;

	return (new_node);
}
