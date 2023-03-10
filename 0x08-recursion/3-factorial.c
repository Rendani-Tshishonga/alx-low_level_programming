#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number to find factorial of
 * Return: the factorial of n and if n is less than
 * zero return an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
