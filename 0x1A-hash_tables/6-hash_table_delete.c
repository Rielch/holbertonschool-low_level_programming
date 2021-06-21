#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table
 *
 * @ht: hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size;
	hash_node_t *temp;

	if (ht != NULL)
	{
		for (size = 0; size < ht->size; size++)
		{
			if (ht->array[size] != NULL)
			{
				temp = ht->array[size];
					while (temp != NULL)
					{
						free(temp->value), free(temp->key);
						free(temp);
						temp = temp->next;
					}
			}
		}
		free(ht->array);
		free(ht);
	}
}
