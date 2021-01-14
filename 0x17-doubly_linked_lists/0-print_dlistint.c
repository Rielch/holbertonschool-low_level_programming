#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 *
 * @h: element of the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t a = 0;

	if (h == NULL)
	{
		return (a);
	}
	if (h->prev != NULL)
	{
		temp = h->prev;
	}
	else if (h->next != NULL)
	{
		temp = h->next;
	}
	else
	{
		printf("%d\n", h->n);
		return (1);
	}
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		a++;
	}
	return (a);
}
