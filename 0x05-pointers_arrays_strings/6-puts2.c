#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: the character string
 * Return: void
 */

void puts2(char *str)
{
	int tmp = 0;
	int  j;

	while (str[tmp] != '\0')
	{
		tmp++;
	}
	for (j = 0; j < tmp; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
