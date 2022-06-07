#include "main.h"

/**
 * _abs - _abs function
 * Description: get the absolute value of a number
 *
 * @number: number to get absolute of
 * Return: int
 */
int _abs(int number)
{
	if (number < 0)
	{
		return (number / -1);
	}
	else
	{
		return (number);
	}
}
