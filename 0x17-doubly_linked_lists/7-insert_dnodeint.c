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
	dlistint_t *new = malloc(sizeof(dlistint_t)), *prev = *h, *next = NULL;
	unsigned int i = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = prev;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (prev != NULL)
	{
		while (prev->prev != NULL)
		{
			prev = prev->prev;
		}
		while (i < idx - 1)
		{
			prev = prev->next;
			if (prev == NULL)
			{
				free(new);
				return (NULL);
			}
			i++;
		}
		if (prev->next != NULL)
		{
			next = prev->next, next->prev = new;
		}
		prev->next = new, new->next = next, new->prev = prev;
		return (new);
	}
	free(new);
	return (NULL);
}
