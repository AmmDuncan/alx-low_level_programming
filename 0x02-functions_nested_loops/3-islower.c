#include "main.h"

/**
 * _islower - is lower functions
 * Description: checks if character is lower
 * @c: character to check
 * Return: int
 */
int _islower(char c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}

	return (0);
}
