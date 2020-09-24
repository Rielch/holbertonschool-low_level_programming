#include "holberton.h"
/**
 * print_triangle - Entry point
 * @size: size of triangle
 */

void print_triangle(int size)
{
int a, b, c;
a = 0;
if (size > 0)
{
while (a < size)
{
b = (size - 1) - a;
while (b > 0)
{
_putchar(' ');
b--;
}
c = a;
while (c >= 0)
{
_putchar('#');
c--;
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
