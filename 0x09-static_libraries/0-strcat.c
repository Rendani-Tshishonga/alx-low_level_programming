#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @str: input string
 * @dest: input string
 * Return: return dest
 */

char *_strcat(char *dest, char *str)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
