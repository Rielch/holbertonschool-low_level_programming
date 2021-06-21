#include "search_algos.h"

/**
 * linear_search - Searches in an array using linear search
 *
 * @array: array with elements
 * @size: size of the array
 * @value: value to find
 * Return: First index with the value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
