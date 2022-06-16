#include "main.h"

/**
 * _strncpy - _strncpy function
 * Description: copy string to replace another string
 * @dest: string to be continued
 * @src: string to append to dest
 * @n: most bytes to copy from src
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	char *ptr = dest;

	for (j = 0; j < n && src[j] != '\0'; j++, dest++)
	{
		*dest = src[j];
	}

	while (j < n)
	{
		*dest = '\0';
		dest++;
		j++;
	}

	return (ptr);
}
