#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list
 * @head: a pointer to a list_t
 * @str: a pointer to s string
 * Return: a pointer to a node at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
