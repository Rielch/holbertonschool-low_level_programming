#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string to convert
 * Return: unsigned int or 0 if not posible to convert
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if (b[a] > '1' || b[a] < '0')
		{
			return (0);
		}
		uint *= 2;
		if (b[a] == '1')
		{
			uint++;
		}
		a++;
	}
	return (uint);
}
