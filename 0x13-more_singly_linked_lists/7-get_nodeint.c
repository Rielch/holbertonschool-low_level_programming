#include "lists.h"

/**
 * get_nodeint_at_index - get the node in the index position
 *
 * @head: pointer to the head of the linked list
 * @index: position in the linked list starting in 0
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head != NULL)
	{
		while (n < index)
		{
			n++;
			if (head->next != NULL)
			{
				head = head->next;
			}
			else
			{
				return (NULL);
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (head);
}
