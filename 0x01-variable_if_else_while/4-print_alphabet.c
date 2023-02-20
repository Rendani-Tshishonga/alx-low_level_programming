#include <stdio.h>
/**
 * main - print the alphabet in lowercase dont print q e
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; 'a' < 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
