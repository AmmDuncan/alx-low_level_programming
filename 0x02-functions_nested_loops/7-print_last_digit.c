#include "main.h"

/**
 * print_last_digit - print_last_digit function
 * Description: prints the last digit of a number
 *
 * @number: number to get last digit of
 * Return: int
 */
int print_last_digit(int number)
{
	int lastDigit;

	if (number < 0)
	{
		lastDigit = -1 * (number % 10);
	}
	else
	{
		lastDigit = number % 10;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
