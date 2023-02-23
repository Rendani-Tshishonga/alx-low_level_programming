#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: The size of the square
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (b = 0; b < size; b++)
	{
	for (a = 0; a < size; a++)
	{
		_putchar(35);
	}
	_putchar('\n');
	}
	}
}
