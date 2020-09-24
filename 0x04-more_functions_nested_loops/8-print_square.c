#include "holberton.h"
/**
 * print_square - Entry point
 * @size: size of the square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
int a = 0;
int b;
if (size > 0)
{
while (a < size)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
