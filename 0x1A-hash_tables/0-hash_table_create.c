#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;

	new = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL || array == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = array;
	return (new);
}
