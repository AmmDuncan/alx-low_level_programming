#include "main.h"

/**
 * _strlen - _strlen function
 * @s: pointer to string to count
 * Return: int
 */
int _strlen(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i - 1);
}
