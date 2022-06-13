#include "main.h"

/**
 * _puts - _puts function
 * Description: prints string to stdout;
 * @str: string to print to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
