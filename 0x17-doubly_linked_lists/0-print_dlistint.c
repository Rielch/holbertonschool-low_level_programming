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

	if (h != NULL)
	{
		printf("%d\n", h->n);
		temp = h->next;
		a++;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		a++;
	}
	temp = h->prev;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->prev;
		a++;
	}
	return (a);
}
