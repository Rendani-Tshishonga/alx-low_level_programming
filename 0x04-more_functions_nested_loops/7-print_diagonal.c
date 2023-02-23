#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: Number of times to print the diagonal line
 * Return: void
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 0; j < n; j++)
	{
	for (k = 0; k < j; k++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
