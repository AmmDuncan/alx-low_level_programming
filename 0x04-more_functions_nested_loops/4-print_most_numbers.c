#include "main.h"

/**
 * print_most_numbers - print_most_numbers function
 * Description: print numbers from 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
