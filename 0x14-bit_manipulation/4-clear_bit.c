#include "holberton.h"

/**
 * clear_bit - set the value of a bit to 0 in the given index
 *
 * @n: number given to set
 * @index: index of the bit to set
 * Return: 1 if possible or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;
	unsigned long int bit = ~0;

	if (index <= (sizeof(unsigned long int) * 8))
	{
		bit = bit << 1;
		for (a = 0; a < index; a++)
		{
			bit = bit << 1;
			bit++;
		}
		*n = *n & bit;
		return (1);
	}
	else
	{
		return (-1);
	}
}
