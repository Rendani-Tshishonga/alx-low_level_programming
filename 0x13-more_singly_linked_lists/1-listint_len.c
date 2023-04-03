#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - a function returns the number of elements
 * in a linked list
 * @h: a pointer to the first node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
