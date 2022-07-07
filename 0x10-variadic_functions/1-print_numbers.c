#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers with a given separator
 * @separator: char to use as separator
 * @n: total number of numbers to be passed
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 0;
	va_list numlist;

	if (n == 0)
		return;

	va_start(numlist, n);
	for (; i < (int)n; i++)
	{
		printf("%d", va_arg(numlist, int));

		if (separator != NULL && i < (int)n - 1)
			printf("%s", separator);

	}

	printf("\n");
	va_end(numlist);
}

