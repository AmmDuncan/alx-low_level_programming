#include "main.h"

/**
 * _isdigit - _isdigit function
 * Description: check if a character is a digit
 * @c: char to check
 * Return: int
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
