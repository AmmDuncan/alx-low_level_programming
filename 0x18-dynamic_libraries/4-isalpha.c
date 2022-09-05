#include "main.h"

/**
 * _isalpha - _isalpha function
 * Description: checks if character is an alphabet
 * @c: character to check
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
