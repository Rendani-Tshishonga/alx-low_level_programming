#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: the number to print binary from
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bits;
	int count = 0;
	unsigned long int binary;

	for (bits = 63; bits >= 0; bits--)
	{
		binary = n >> bits;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
