#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a node at the
 * end of a list
 * @head: a pointer to a node
 * @n: an int element of a node
 * Return: the last node of the list or null if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp = *head;

	end = malloc(sizeof(listint_t));
	end->n = n;
	end->next = NULL;
	if (!end)
		return (NULL);
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = end;
	return (end);
}
