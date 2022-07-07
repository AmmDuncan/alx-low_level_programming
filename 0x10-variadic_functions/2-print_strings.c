#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: string to separate other strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ls;

	va_start(ls, n);
	for (; i < n; i++)
	{
		char *str = va_arg(ls, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
}

