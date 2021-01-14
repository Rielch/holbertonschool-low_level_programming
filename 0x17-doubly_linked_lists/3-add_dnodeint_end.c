#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 *
 * @head: node of the list
 * @n: element of the new node
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	return (new);
}
