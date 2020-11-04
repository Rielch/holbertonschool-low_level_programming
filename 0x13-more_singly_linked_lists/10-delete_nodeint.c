#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the marked index
 *
 * @head: pointer to the head of the linked list
 * @index: index to be erased
 * Return: 1 if succed, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int n = 0;

	if (*head != NULL && index != 0)
	{
		temp = *head;
		while (n < index)
		{
			n++;
			temp2 = temp;
			temp = temp->next;
			if (temp == NULL)
				break;
		}
		if (n != index)
		{
			return (-1);
		}
		temp2->next = temp->next;
		free(temp);
		return (1);
	}
	else if (*head != NULL && index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	return(-1);
}
