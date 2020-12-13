#include "lists.h"

/**
 * get_dnodeint_at_index - get the value of a node at index in a linked list
 *
 * @head: element of the linked list
 * @index: index
 * Return: node in the index position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n;

	temp = head;
	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}
	for (n = 0; n < index; n++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}
	return (temp);
}
