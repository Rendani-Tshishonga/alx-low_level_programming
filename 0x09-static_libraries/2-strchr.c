#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character
 * in a string
 * @s: the string of characters
 * @c: the character we looking for
 * Return: a pointer to the first occurrence
 * if Null return s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
