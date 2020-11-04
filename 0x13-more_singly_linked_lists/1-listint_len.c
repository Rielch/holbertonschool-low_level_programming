#include "lists.h"

/**
 * listint_len - returns the number of elements of the list
 *
 * @h: pointer to the head of the list
 * Return: number of nodes of the list
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;
	listint_t *temp;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		n++;
		temp = h->next;
	}
	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	return (n);
}
