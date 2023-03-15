#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		concat[j] = s2[j];
		i++;
		j++;
	}
	concat = '\0';
	return (concat);
}
