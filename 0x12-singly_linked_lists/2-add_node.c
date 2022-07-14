#include "lists.h"

/**
 * add_node - add a node to the beginning of a linked list
 * @head: pointer to the pointer to the head
 * @str: string value to store int the new node
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *head_p = *head;
	list_t *new_head = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!head || !str)
		return (NULL);

	while (str[len])
		len++;

	(*head) = new_head;

	new_head->str = strdup(str);
	new_head->len = len;
	new_head->next = head_p;

	return (*head);
}
