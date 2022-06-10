#include "main.h"

/**
 * print_triangle - print_trianle function
 * Description: prints a triangle made of #
 * @size: size of triangle;
 */
void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j = 0;
		int k = 0;
		int nSpaces = size - i;

		while (j < nSpaces)
		{
			_putchar(' ');
			j++;
		}

		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}
}
