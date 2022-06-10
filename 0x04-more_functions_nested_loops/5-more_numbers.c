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

		for (num; num < 15; num++)
		{
			_putchar(num + '0');
		}
	}
}
