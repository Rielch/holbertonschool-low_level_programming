#include "hash_tables.h"

/**
 * hash_table_set - adds an element on the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value for the key
 * Return: 1 if succed or 0 if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
	{
		return (0);
	}
	size = ht->size;
	index = key_index((const unsigned char *) key, size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
