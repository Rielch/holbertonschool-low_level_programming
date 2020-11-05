#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1 in the index position
 *
 * @n: number to be set
 * @index: position to be set
 * Return: 1 if worked or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
	{
		*n = (*n | (1 << index));
		return (1);
	}
	else
	{
		return (-1);
	}
}
