#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: the width and height of the array
 */

int **alloc_grid(int width, int height)
{
	int **table;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	table = malloc(sizeof(int *) * height);
	if (table == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		table[a] = malloc(sizeof(int) * width);
		if (table[a] == NULL)
		{
			for (; a >= 0; a--)
				free(table[a]);
			free(table);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			table[a][b] = 0;
	}
	return (table);
}
