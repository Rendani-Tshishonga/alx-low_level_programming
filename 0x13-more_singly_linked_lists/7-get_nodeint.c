#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a list
 * @head: a pointer to the first node in a list
 * @index: the index to return
 * Return: the value of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (temp != NULL && i < index)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
