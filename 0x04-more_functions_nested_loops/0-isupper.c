#include "main.h"

/**
 * _isupper - _isupper function
 * Description: check if char at charCode is uppercase
 * @c: char to check
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
