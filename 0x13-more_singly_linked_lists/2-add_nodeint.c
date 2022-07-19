#include "lists.h"

/**
 * add_nodeint - add node to beginning of linked list
 * @head: pointer to head of linked list
 * @n: new item to add to list
 * Return: pointer to new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
