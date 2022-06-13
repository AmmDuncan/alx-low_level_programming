#include "main.h"

/**
 * swap_int - swap_int function
 * @a: address to first number
 * @b: address to second number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
