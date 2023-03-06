#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: pointer to copy memory to
 * @src: pointer to copy memory from
 * @n: number of bytes to assign
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
