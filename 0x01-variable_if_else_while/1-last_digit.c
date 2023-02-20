#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of the randomly assigned n
 * Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d", n, x);
	if (x > 5)
	{
		printf("Last digit of %d is greater than 5\n", x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is 0\n", x);
	}
	else
	{
		printf("Last digit of %d is less than 6 and not 0\n", x);
	}
	return (0);
}
