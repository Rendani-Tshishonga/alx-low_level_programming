#include "search_algos.h"

/*
 * interpolation_search - a function that searches for a value
 * in a sorted array
 * @array:a pointer tot the first element of the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the value searched for
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
