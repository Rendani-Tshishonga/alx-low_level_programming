#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - a function that adds a new node to the list
 * @head: the pointer to the new node
 * @n: int value of the new node
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
