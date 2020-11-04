#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list and returns its data
 *
 * @head: pointer to the head of the linked list
 * Return: data in the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head != NULL)
	{
		temp = *head;
		n = temp->n;
		*head = temp->next;
		free(temp);
		return (n);
	}
	else
	{
		return (0);
	}
}
