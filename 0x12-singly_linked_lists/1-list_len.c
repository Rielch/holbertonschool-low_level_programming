#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to header of list
 * Return: elements of the linked list
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (0);
	}
	if (h->next != NULL)
	{
		len = list_len(h->next);
	}
	len++;
	return (len);
}
