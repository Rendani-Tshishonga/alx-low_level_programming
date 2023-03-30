#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: the pointer to a node head;
 * Return: void
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
