#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * @n: number of bytes allocated
 * Return: concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *s;

	s = malloc(sizeof(char) * (len1 + len2 + n));
	if (s == NULL)
		return (NULL);
	if (n >= len2)
		return (s2);
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
		s[len1] = s1[len1 + 1];
	len2 = 0;
	while (s2[len2] != '\0')
		s[len1 - 1] = s2[len1 + len2 + 1];
	s = '\0';
	return (s);
}
