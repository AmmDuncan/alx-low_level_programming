#include "main.h"

/**
 * jack_bauer - jack_bauer functin
 * Description: print all minutes in 24 hours
 * Return: void
 */
void jack_bauer(void)
{
	int hour = 0, minute;

	while (hour < 24)
	{
		int hourFirst = hour / 10;
		int hourSecond = hour % 10;

		minute = 0;

		while (minute < 60)
		{
			int minuteFirst = minute / 10;
			int minuteSecond = minute % 10;

			_putchar(hourFirst + '0');
			_putchar(hourSecond + '0');
			_putchar(':');
			_putchar(minuteFirst + '0');
			_putchar(minuteSecond + '0');
			_putchar('\n');

			minute++;
		}

		hour++;
	}
}
