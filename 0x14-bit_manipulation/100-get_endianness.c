#include "holberton.h"

/**
 * get_endianness - check the endianness of the system
 *
 * Return: 1 if little endian and 0 if big endian
 */

int get_endianness(void)
{
	char *str = "a";

	if (&str[1] > &str[0])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
