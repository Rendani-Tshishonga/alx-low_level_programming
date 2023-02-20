#include <stdio.h>
/**
 * main - print alphabets in lowercase and then in uppercase
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; 'a' <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; 'A' <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
