#include "main.h"
/**
 * set_bit - sets the value of a bit to one
 * at a given index
 * @n: a pointer to the number
 * @index: the index of the bits to set to 1
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}

