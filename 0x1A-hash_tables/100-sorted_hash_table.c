#include "hash_tables.h"
#include <stdio.h>

/**
 * shash_table_create - creates a sorted hash table
 *
 * @size: size of the array of the hash table
 * Return: sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->shead = NULL;
	new->stail = NULL;
	new->size = size;
	return (new);
}

/**
 * shash_table_set - adds an element in the sorted hash table
 *
 * @ht: hash table
 * @key: key for the value
 * @value: value
 * Return: 1 if succeed or 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *temp;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	new->value = strdup(value);
	new->key = strdup(key);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	order_list(ht, key, new);
	return (1);
}

/**
 * order_list - set the new node in the sorted list
 *
 * @ht: hash table
 * @key: key
 * @new: new node
 * Return: void
 */

void order_list(shash_table_t *ht, const char *key, shash_node_t *new)
{
	shash_node_t *prev = NULL, *temp;

	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
	}
	else
	{
		temp = ht->shead;
		while (temp != NULL)
		{
			if (strcmp(key, temp->key) > 0)
			{
				break;
			}
			prev = temp;
			temp = temp->snext;
		}
		if (prev != NULL)
			prev->snext = new;
		new->sprev = prev;
		new->snext = temp;
		temp->sprev = new;
	}
}

/**
 * shash_table_get - retrieves the value assosiated with a key
 *
 * @ht: hash table
 * @key: key to search
 * Return: value assosiated with the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the sorted hash table
 *
 * @ht: hash table
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int a = 0;

	if (ht != NULL)
	{
		putchar('{');
		if (ht->shead != NULL)
		{
			temp = ht->shead;
			while (temp != NULL)
			{
				if (a == 0)
					a++;
				else
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->snext;
			}
		}
		putchar('}');
		putchar('\n');
	}
}

/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 *
 * @ht: hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int a = 0;

	if (ht != NULL)
	{
		putchar('{');
		if (ht->stail != NULL)
		{
			temp = ht->stail;
			while (temp != NULL)
			{
				if (a == 0)
                                        a++;
                                else
                                        printf(", ");
                                printf("'%s': '%s'", temp->key, temp->value);
                                temp = temp->sprev;
			}
                }
                putchar('}');
		putchar('\n');
        }
}

/**
 * shash_table_delete - deletes the sorted hash table
 *
 * @ht: hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht != NULL)
        {
                if (ht->shead != NULL)
                {
                        temp = ht->shead;
                        while (temp != NULL)
                        {
				free(temp->value), free(temp->key);
				free(temp);
                                temp = temp->snext;
                        }
                }
		free(ht->array);
		free(ht);
        }
}
