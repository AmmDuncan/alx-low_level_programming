#include "lists.h"

/**
 * print_list - print a singly linked list
 * @h: first node in list
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current = (list_t *)h;

	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
