#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints natural numbers
 * @n: positive natural number
 * Return: void
 */

void print_to_98(int n)
{
	for (n = 1; n <= 98; n++)
	{
		printf("%d", n);
	}
	printf("\n");
}
