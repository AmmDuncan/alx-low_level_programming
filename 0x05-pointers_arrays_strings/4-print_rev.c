#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: address to string to print in reverse
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	char *first = s;
	char *cursor = s;

	while (len != 0)
	{
		cursor++;
		len--;
	}

	while (cursor != first)
	{
		_putchar(*cursor);
		cursor--;
	}
	_putchar(*first);
	_putchar('\n');
}

/**
 * _strlen - _strlen function
 * @s: pointer to string to count
 * Return: int
 */
int _strlen(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i - 1);
}
