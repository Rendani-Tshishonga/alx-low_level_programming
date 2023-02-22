#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * Return: void
 */

void times_table(void)
{
	int x, y;
	int result;

	result = x * y;
	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
		_putchar(44);
		_putchar(32);
		_putchar(result + '0');
	}
	_putchar('\n');
	}
}
