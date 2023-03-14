#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input value one
 * @s2: input value
 * Return: return s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
		return (s1[j] - s2[j]);
		}
		j++;
	}
	return (0);
}
