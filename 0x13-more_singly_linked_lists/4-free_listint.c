#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a list
 * @head: a pointer to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
