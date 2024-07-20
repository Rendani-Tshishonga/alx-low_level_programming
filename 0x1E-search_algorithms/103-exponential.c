#include "search_algos.h"

/*
 * _binary_search - a function to find a value in a
 * sorted array
 * @array: the pointer to the first element
 * @low: the element left of the search
 * @high: the element to the right of the search
 * @value: the value to search for
 * Return: the first instance of the value searched for
 */

int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);
	while (high > low)
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

/*
 * exponential_search - a function to find a value in a
 * sorted array using exponential search
 * @array: the pointer to the first element of the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the value searched for
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	low = 1;
	while (low < size && array[low] <= value)
		low = low * 2;
	high = low < size ? low : size - 1;
	return (_binary_search(array, low / 2, high, value));
}
