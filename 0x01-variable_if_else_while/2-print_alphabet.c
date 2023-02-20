#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase on a new line
 * Return: 0
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';

	for (alphabet = 'a', 'a' <= 'z', alphabet++)
		putchar(alphabet);

	putchar('\n');
	
	return (0);
}
