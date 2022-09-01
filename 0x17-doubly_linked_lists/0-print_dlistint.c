#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: pionts to head node
 *
 * Description: print all elements in a doubly linked list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *cur_node;

	if (NULL)
		return (0);

	size = 0;
	cur_node = h;

	while (cur_node != NULL)
	{
		printf("%d\n", cur_node->n);
		cur_node = cur_node->next;
		size++;
	}

	return (size);
}
