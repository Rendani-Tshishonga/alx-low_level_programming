#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: input string
 * @src: copy string into
 * @n: input value
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	if (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
