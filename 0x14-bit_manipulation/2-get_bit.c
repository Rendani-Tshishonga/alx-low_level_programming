#include "main.h"
/**
 * get_bit - a function that returns a value of
 * a bit at a given index
 * @n: the value which is a power of 2
 * @index: the index of the number to return
 * Return: the value of the bit at index
 * or -1 if error occurs
 */
int get_bit(unsigned long n, unsigned int index)
{
	int bits = 63;

	if (bits > 63)
		return (-1);
	bits = (n >> index) & 1;
	return (bits);
}
