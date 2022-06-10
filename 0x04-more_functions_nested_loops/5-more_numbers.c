#include "main.h"

/**
 * more_numbers - more_numbers functin
 * Description: print numbers 0 - 14 x10
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int num = 0;

		for (num = 0; num < 15; num++)
		{

			int first = num / 10;
			int second = num % 10;
			if (first > 0)
			{
				_putchar(first + '0');
			}
			_putchar(second + '0');
		}
		_putchar('\n');
		i++;
	}
}
