#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of the list
 * @head: a pointer to the first node of the list
 * Return: return 0 if list is empty else return n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (!head)
		return (0);
	*head = (*head)->next;
	n = (*head)->n;
	free(temp);
	return (n);
}
