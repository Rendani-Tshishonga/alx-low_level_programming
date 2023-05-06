#include "main.h"
/**
 * binary_to_uint - a function that prints a binary number to unsigned int
 * @b: the a pointer to the address of the binary string
 * Return: the converted number or 0 if not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			val += (2 ^ (len - i - 1));
		}
	}
	return (val);
}
