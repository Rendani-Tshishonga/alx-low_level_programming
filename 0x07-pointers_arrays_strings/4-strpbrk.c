#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return (NULL);
}
