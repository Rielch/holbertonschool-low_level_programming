#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 *
 * @h: element of the linked list
 * @idx: position of the new node
 * @n: value of the new node
 * Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *prev = NULL, *next = *h;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = next, new->prev = prev;
		if (next != NULL)
			next->prev = new;
		*h = new;
		return (new);
	}
	if (next != NULL)
	{
		while (next->prev != NULL)
			next = next->prev;
		while (i < idx)
		{
			prev = next, next = next->next;
			i++;
			if (next == NULL)
			{
				if (i != idx)
				{
					free(new);
					return (NULL);
				}
				else
					break;
			}
		}
		new->next = next, new->prev = prev, prev->next = new;
		if (next != NULL)
			next->prev = new;
		return (new);
	}
	free(new);
	return (NULL);
}
