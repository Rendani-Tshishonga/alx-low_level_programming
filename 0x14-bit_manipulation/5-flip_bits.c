#include "main.h"
/**
 * flip_bits - a function that returns the number
 * of bits to flip
 * @n: the first number
 * @m: the second number
 * Return: the count of values to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	int count;
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
