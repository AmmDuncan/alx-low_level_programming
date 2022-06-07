#include "main.h"

/**
 * print_to_98 - print numbers from param n to 98
 * @n: number to start at;
 */
void print_to_98(int n)
{
	int i;
	int first = n / 10;
	int last = n % 10;

	for (i = 0; i <= 98; i++)
	{
		if (first > 0)
		{
			_putchar(first + '0');
		}
		_putchar(last + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
