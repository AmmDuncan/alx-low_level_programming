#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all given numbers
 * @n: number of numbers to sum
 * Return: int sum of all args
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);


	va_start(list, n);
	for (; i < (int)n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}

