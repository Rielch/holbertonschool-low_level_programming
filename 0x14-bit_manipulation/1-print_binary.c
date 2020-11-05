#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	print_binary2(n);
}

/**
 * print_binary2 - prints the binary representation of a number
 *
 * @n: number to print
 * Return: Void
 */

void print_binary2(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_binary2(n >> 1);
	_putchar((1 & n) + '0');
}
