#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to find in array
 * Return: index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0, found_left, found_right, is_even = size % 2 == 0;
	int *left_array = NULL, *right_array = NULL;
	size_t mid = size / 2;

	if (is_even)
		mid--;
	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);
	printf("\n");
	if (size == 1 && array[0] == value)
		return (0);
	else if (size == 1 && array[0] == value)
		return (-1);
	if (array[mid] == value)
		return (mid);
	for (i = 0; (size_t)i < mid; i++, left_array++, right_array++)
	{
		left_array = &array[i];
		if ((i + mid) < size)
			right_array = &array[i + mid];
	}
	left_array = &array[0];
	right_array = &array[mid + 1];
	if (array[mid] > value)
	{
		found_left = binary_search(left_array, mid, value);
		return (found_left);
	}
	else
	{
		found_right = binary_search(right_array, size - mid - 1, value);
		if (found_right != -1)
			return (mid + found_right + 1);
	}
	return (-1);
}

/**
 * print_array - print array of integers
 *
 * @array: array to print
 * @size: size of array to print
 */
void print_array(int *array, size_t size)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", array[i]);
	}
}
