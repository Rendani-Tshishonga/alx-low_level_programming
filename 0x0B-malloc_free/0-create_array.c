#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars
 * @size: the size of the char
 * @c: the assigned char
 * Return: array of chars or if fails
 * return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
