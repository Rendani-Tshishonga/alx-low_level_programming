#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: copy string from src
 * @src: copy string to dest
 * Return: return the combined string
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
