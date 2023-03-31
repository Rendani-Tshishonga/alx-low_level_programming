#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list
 * @head: a pointer to a node
 * @str: a pointer to a string
 * Return: return a pointer to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
