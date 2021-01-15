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
	unsigned char *key2 = (unsigned char*) key;
	char *val = strdup(value);

	if (ht == NULL)
	{
		return (0);
	}
	size = ht->size;
	if (key != NULL)
	{
		index = key_index(key2, size);
	}
	else
	{
		return (0);
	}
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key))
		{
			temp->value = val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return(0);
	}
	new->value = val;
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
