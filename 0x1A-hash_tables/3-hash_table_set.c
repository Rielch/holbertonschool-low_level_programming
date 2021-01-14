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
	unsigned char *key2 = NULL;
	char *val = NULL, *key3 = NULL;

	if (ht == NULL)
	{
		return (0);
	}
	size = ht->size;
	if (key != NULL)
	{
		key2 = _str_copy_u(key, key2);
		index = key_index(key2, size);
		free(key2);
	}
	else
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return(0);
	}
	key3 = _str_copy(key, key3);
	val = _str_copy(value, val);
	new->key = key3;
	new->value = val;
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key3, temp->key) == 0)
		{
			temp->value = val;
			break;
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		new->next = temp;
		ht->array[index] = new;
	}
	free(val), free(key3);
	return (1);
}


/**
 * _str_copy_ - copy a string to unsigned
 *
 * @src: source string
 * @dest: destination to copy
 * Return: dest
 */

unsigned char *_str_copy_u(const char *src, unsigned char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	dest = malloc(sizeof(char) * i + 1);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}


/**
 * _str_copy - copy a string
 *
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_str_copy(const char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	dest = malloc(sizeof(char) * i + 1);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
