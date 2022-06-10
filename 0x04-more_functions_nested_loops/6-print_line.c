#include "main.h"

/**
 * print_line - print_line function
 * Description: print lines of length n
 * @n: number of _ that make up the line
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
