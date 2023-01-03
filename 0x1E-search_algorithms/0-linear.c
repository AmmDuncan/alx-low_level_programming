#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to find in array
 * Return: index if found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
