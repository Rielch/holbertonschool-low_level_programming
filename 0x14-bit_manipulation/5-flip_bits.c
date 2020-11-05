#include "holberton.h"

/**
 * flip_bits - gives the number of bits to change to get to the number
 *
 * @n: first number
 * @m: second number
 * Return: different bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int temp = n ^ m;

	while (temp != 0)
	{
		if ((temp & 1) == 1)
		{
			flips++;
		}
		temp = temp >> 1;
	}
	return (flips);
}
