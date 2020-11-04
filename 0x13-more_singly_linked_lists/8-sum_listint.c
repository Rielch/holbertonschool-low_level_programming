#include "lists.h"

/**
 * sum_listint - sum all numbers of the linked list
 *
 * @head: pointer to the head of the linked list
 * Return: Sum of all numbers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head != NULL)
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
