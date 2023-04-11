#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - a function to convert a binary to unsigned int
 * @b: a pointer to a string of binary numbers
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int decimal = 1;
	int len = strlen(b);
	unsigned int total = 0;

	if (!b)
		return (0);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += decimal;
		decimal *= 2;
	}
	return (total);
}
