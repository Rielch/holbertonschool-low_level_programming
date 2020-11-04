#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of the linked list
 *
 * @head: pointer to the head of the linked list
 * @n: int to be added
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
