#include "search_algos.h"

/*
 * binary_search - a function that searches for a value in an array
 * of integers.
 * @array: a pointer to the first element of the array.
 * @size: the number of elements in the array.
 * @value: is the value to search for.
 * Return: the index of the value searched for.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (high >= low)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
