#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to check
 * @index: bit to check
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (n >> index || n == 0)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
