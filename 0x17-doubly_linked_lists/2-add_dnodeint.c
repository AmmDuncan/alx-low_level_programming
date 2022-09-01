#include "lists.h"

/**
 * add_dnodeint - add node to list
 * @head: points to head of list
 * @n: number to add to lists
 *
 * Description: add new node to beginning of list
 * Return: pointer to newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
		return (NULL);

	(*head)->prev = new_node;
	new_node->next = *head;

	return (new_node);
}
