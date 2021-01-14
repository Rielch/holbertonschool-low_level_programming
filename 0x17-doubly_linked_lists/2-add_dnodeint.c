#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of the list
 *
 * @head: node of the list
 * @n: element to assign
 * Return: Address of the new node or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (temp != NULL)
	{
		while (temp->prev != NULL)
		{
			temp = temp->prev;
		}
		temp->prev = new;
	}
	new->next = temp;
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (new);
}
