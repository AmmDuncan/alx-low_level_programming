#include "main.h"

/**
 * times_table - print timetable
 * Description: Print out 9 times table
 * Return : void
 */
void times_table(void)
{
	int base = 9;
	int multiplier1;
	int multiplier2;

	for (multiplier1 = 0; multiplier1 <= base; multiplier1++)
	{
		for (multiplier2 = 0; multiplier2 <= base; multiplier2++)
		{
			int multiple = multiplier1 * multiplier2;
			int first = multiple / 10;
			int second = multiple % 10;

			if (multiple != 0)
			{
				_putchar(' ');
				if (first == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(first + '0');
				}
			}
			_putchar(second + '0');
			if (multiplier2 != base)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
