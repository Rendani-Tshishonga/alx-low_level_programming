#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * @str: the pointer to the char
 * Return: the char or return NULL
 */

char *_strdup(char *str)
{
	char *str2;
	int i;
	int r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	str2 = malloc(sizeof(char) * (i + 1));
	if (str2 == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		str2[r] = str[r];
	return (str2);
}
