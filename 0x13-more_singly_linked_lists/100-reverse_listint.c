#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 *
 * @head: head of the linked list
 * Return: pointer to the new head of the linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (*head != NULL)
	{
		temp = *head;
		if (temp->next != NULL)
		{
			temp2 = temp->next;
			if (temp2->next != NULL)
			{
				temp->next = NULL;
				while (temp2->next != NULL)
				{
					temp = temp2->next;
					temp2->next = *head;
					*head = temp2;
					temp2 = temp;
				}
				temp2->next = *head;
				*head = temp;
				return (temp2);
			}
			else
			{
				temp->next = NULL;
				temp2->next = temp;
				*head = temp2;
				return (temp2);
			}
		}
		return (temp);
	}
	return (*head);
}
