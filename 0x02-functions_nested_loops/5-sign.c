#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: Checks the number
 * Return: return 1 for positive num,-1 for negative num
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
