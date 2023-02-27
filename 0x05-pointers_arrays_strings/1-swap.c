#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: value of the first integer
 * @b: value of second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
