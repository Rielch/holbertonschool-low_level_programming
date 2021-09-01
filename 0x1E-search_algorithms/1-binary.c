#include "search_algos.h"

/**
 * binary_search - Searches an array for a value using binary search
 *
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 * Return: Index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int end = size - 1, mid, mid2 = 0, index = 0;
	unsigned int i;

	if (array == NULL || end < 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
	mid = end / 2;
	if (value < array[mid])
	{
		index = binary_search(array, mid, value);
	}
	else if (value > array[mid])
	{
		index = binary_search(&array[mid + 1], end - mid, value);
		mid2 = end - mid;
	}
	else
		mid2 = mid;
	if (index == -1)
		return (-1);
	return (index + mid2);
}
