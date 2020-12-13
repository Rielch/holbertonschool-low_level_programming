#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes
 *
 * @h: element of the doubly linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = NULL;
	size_t a = 0;

	if (h != NULL)
	{
		temp = h->next;
		a++;
	}
	while (temp != NULL)
	{
		temp = temp->next;
		a++;
	}
	if (h != NULL)
	{
		temp = h->prev;
	}
	while (temp != NULL)
	{
		temp = temp->prev;
		a++;
	}
	return (a);
}
