#include "lists.h"

/**
 * print_listint - prints a linked list of ints
 *
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		temp = h->next;
		n++;
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}
	return (n);
}
