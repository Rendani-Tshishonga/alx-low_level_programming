#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: the string of characters
 * Return: void
 */

void puts_half(char *str)
{
	int n = 0;
	int j;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		j = (n - 1) / 2;
		j += 1;
	}
	else
	{
		j = n / 2;
	}
	for (; j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
