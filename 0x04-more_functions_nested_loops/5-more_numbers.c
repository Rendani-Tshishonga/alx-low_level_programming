#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;
	int j;

	while (a <= 10)
	{
		j = 0;

	while (j <= 14)
	{
		_putchar(j + '0');
		j++;
	}
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
