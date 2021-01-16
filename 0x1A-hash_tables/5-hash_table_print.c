#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints all elements in the hash table
 *
 * @ht: hash table
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	int a = 0;
	hash_node_t *temp;

	if (ht != NULL)
	{
		putchar('{');
		for (size = 0; size < ht->size; size++)
		{
			if (ht->array[size] != NULL)
			{
				temp = ht->array[size];
					while (temp != NULL)
					{
					if (a == 0)
						a++;
					else
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					}
			}
		}
		putchar('}');
		putchar('\n');
	}
}
