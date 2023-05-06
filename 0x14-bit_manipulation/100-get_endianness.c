#include "main.h"
/**
 * get_endianness - a function that checks if an architecture is
 * little endianness or big endianness
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
