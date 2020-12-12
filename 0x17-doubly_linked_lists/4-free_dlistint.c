#include "lists.h"

/**
 * free_dlistint - frees a doubly linkded list
 *
 * @head: node of the linked list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;

	if (head != NULL)
	{
		temp = head->prev;
		while (temp != NULL)
		{
			temp2 = temp;
			temp = temp->prev;
			free(temp2);
		}
		temp = head;
		while (temp != NULL)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2);
		}
	}
}
