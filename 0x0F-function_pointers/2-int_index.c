#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array to search through
 * @size: size of array to be searched
 * @cmp: pointer to compare function
 * Return: int;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
	{
		return (-1);
	}

	while (index < size)
	{
		int same;

		same = cmp(array[index]);
		if (same != 0)
		{
			return (index);
		}

		index++;
	}

	return (-1);
}
