#include <stdio.h>
/**
 * main - print alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; 'z' >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
