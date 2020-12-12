#include "lists.h"

/**
 * sum_dlistint - sum all the data of a linked list
 *
 * @head: element of the list
 * Return: sum of all elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->prev;
	}
	temp = head->next;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
