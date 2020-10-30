#include "lists.h"

/**
 * add_node - adds a node at the start of the linked list
 *
 * @head: pointer to head of the linked list
 * @str: string to add in the node
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int size;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;
	return (new);
}
