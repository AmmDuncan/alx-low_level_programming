#include "lists.h"

/**
 * add_node_end - add node to the the end of a linked list
 * @head: pointer to pointer to head of linked list
 * @str: string to add to the end
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;
	unsigned int len = 0;

	if (!head || !str)
		return (NULL);

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	printf("[%d] %s", new_node->len, new_node->str);

	while (current && current->next)
	{
		current = current->next;
	}

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
