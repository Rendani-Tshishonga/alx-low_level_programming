#include <stdio.h>
#include "main.h"
/**
 * main - print numbers from 1 to 100 followed by new line,
 * for multiples of 3 print fizz and for multiples of 5 print Fizz Buz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
	}
	else
	{
		printf("%d", n);
	}
	if (n != 100)
	{
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
