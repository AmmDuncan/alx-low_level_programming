#include "lists.h"

/**
 * print_listint - print singly linked list of integers
 * @h: head of singly linked list
 * Return: size of printed list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *current = (listint_t *)h;

	if (!h)
		return (-1);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count += 1;
	}

	return (count);
}
