#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first pointer of the list
 * @idx: the index where to add the new node
 * @n: the int value to add for the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
