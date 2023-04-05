#include "lists.h"
/**
 * sum_listint - sum of all the data in a list
 * @head: the pointer to the first node
 * Return: the sum of the data elements
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
