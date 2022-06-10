#include "main.h"

/**
 * print_square - print_square function
 * Desctiption: prints a square made up of #
 * @size: one size length of the square
 */
void print_square(int size)
{
	int rows = 0;

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
