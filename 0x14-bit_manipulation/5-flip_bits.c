#include "main.h"
/**
 * flip_bits - a function to return the number of bits you would
 * need to flip from one number to another number
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	int count = 0;
	unsigned long int set;
	unsigned long int flips = n ^ m;

	for (bits = 63; bits >= 0; bits--)
	{
		set = flips >> bits;
		if (set & 1)
			count++;
	}
	return (count);
}
