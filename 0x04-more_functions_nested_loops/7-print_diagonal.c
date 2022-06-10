#include "main.h"

/**
 * print_diagonal - print diagonal function
 * Description: print diagonal line in the terminal
 * @n: number of \ that make up the line
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		int noOfSpaces;

		for (noOfSpaces = 0; noOfSpaces < i; noOfSpaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
