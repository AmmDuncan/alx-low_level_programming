#include "main.h"

/**
 * print_square - print_square function
 * Desctiption: prints a square made up of #
 * @size: one size length of the square
 */
void print_square(int size)
{
	int rows = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (rows < size)
	{
		int cols = 0;

		while (cols < size)
		{
			_putchar('#');
			cols++;
		}
		_putchar('\n');
		rows++;
	}
}
