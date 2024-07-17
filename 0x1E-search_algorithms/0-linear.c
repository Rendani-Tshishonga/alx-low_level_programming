#include "search_algos.h"

/*
 * linear_search - a function that searches for a value in a array
 * @array: A pointer to the first element
 * @size: The number of elements
 * @value: the value to search for
 * Return: the first index where value is found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
