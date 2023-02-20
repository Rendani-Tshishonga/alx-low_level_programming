#include <stdio.h>
/**
 * main - print number of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; 'a' < 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
