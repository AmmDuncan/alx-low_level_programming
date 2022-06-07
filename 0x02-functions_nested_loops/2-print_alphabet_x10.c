#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
}
