#include "lists.h"

/**
 * free_listint2 - frees the linked list and set head to NULL
 *
 * @head: pointer to the head of the linked list
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	*head = NULL;
}
