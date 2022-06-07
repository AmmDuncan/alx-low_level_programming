#include "main.h";

/**
 * print_sign - print_sign function
 * Description: check if number is  greater than zero and print sign
 * @n: number to check
 * Return: int
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0') return (0);
	}
}
