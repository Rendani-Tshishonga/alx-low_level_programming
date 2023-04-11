#include "main.h"
/**
 * clear_bit - set a value bit to zero at a given
 * index
 * @n: value to change
 * @index: the index to set to zero
 * Return: 1 on success and 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
