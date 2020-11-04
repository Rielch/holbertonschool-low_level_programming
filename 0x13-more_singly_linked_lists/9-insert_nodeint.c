#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the head of the linked list
 * @idx: position where the new node will be
 * @n: value of the new node
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp2, *temp, *new = malloc(sizeof(listint_t));
	unsigned int a;

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
	{
		temp = *head;
		while (a < idx - 1)
		{
			a++;
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
			else
			{
				return (NULL);
			}
		}
		if (temp->next != NULL)
		{
			temp2 = temp->next;
		}
		else
		{
			temp2 = NULL;
		}
		temp->next = new;
		new->n = n;
		new->next = temp2;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
