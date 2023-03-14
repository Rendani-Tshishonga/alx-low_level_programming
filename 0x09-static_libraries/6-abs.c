#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @c: The number computed
 * Return: return the absolute value of number or positive integer c
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
