#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min + 1;
	return (ptr);
}
