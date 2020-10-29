#include "lists.h"

/**
 * print_list - prints all elements of a list
 *
 * @h: list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
int nodes = 0;

if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
if (h->next != NULL)
{
nodes = print_list(h->next);
}
nodes++;
return (nodes);
}
