#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: stores Uppercase Character
 * Return: return 1 or return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
