#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase on a new line
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	while ('a' < 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	return (0);
}
