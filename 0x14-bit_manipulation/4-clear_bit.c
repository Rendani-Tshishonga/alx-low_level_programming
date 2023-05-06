#include "main.h"
/**
 * clear_bit - a function to clear the bit to zero
 * at a given index
 * @n: a pointer to a value
 * @index: the index to set to zero
 * Return: 1 on success or zero on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
