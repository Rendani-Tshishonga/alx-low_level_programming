#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string of characters
 * Return: return the length of the string or return 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
