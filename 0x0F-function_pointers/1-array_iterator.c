#include "function_pointers.h"

/**
 * array_iterator - array interator
 * @array: array on params to iterate over
 * @size: size of array
 * @action: function to use during iteration
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

