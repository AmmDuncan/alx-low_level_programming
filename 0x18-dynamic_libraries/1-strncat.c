#include "main.h"

/**
 * _strncat - _strncat function
 * Description: join two strings
 * @dest: string to be continued
 * @src: string to append to dest
 * @n: most bytes to copy from src
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *ptr = dest;

	for (; *dest != '\0'; dest++)
		;

	for (i = 0; i < n && src[i] != '\0'; dest++, i++)
	{
		*dest = src[i];
	}

	return (ptr);
}
