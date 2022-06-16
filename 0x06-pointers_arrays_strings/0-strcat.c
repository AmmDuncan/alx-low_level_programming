#include "main.h"

/**
 * _strcat - _strcat function
 * Description: join two strings
 * @dest: string to be continued
 * @src: string to append to dest
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (; *dest != '\0'; dest++)
		;

	for (i = 0; src[i] != '\0'; dest++, i++)
	{
		*dest = src[i];
	}
	*dest = '\0';

	return (dest);
}
