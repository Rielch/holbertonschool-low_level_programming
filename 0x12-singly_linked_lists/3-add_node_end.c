#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the linked list
 *
 * @head: pointer to the head of the linked list
 * @str: string to duplicate in the new node
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int size;
	list_t *new;
	list_t *tail = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	new->len = size;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return (new);
}
