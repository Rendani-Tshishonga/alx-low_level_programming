#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: Stores the value to be checked
 * Return: if a digit return 1 else return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
