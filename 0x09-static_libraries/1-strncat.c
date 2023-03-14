#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: input of string
 * @src: input of string
 * @n: number of bytes
 * Return: return character dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
