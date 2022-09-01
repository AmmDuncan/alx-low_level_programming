#include "lists.h"

/**
 * add_dnodeint_end - add not to end
 * @head: points to pointer to head of list
 * @n: number to add to list
 *
 * Description: add node to end of doubly linked list
 * Return: pointer to new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, int n)
{
	dlistint_t *newnode, *lastnode;

	lastnode = *head;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);

	while (lastnode != NULL && lastnode->next != NULL)
		lastnode = lastnode->next;

	if (lastnode == NULL)
		*head = newnode;
	else
		lastnode->next = newnode;

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = lastnode;

	return (newnode);
}
