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
	listint_t *temp2 = NULL, *temp, *new = malloc(sizeof(listint_t));
	unsigned int a = 0;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head != NULL)
	{
		temp = *head;
		if (idx != 0)
		{
			while (a < idx)
			{
				a++;
				temp2 = temp;
				temp = temp->next;
				if (temp == NULL)
				{
					break;
				}
			}
			if (a != idx)
			{
				free(new);
				return (NULL);
			}
			temp2->next = new;
			new->next = temp;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	free(new);
	return (NULL);
}
