#include "holberton.h"
/**
 * print_line - Entry point
 * @n: number of '_' to print
 */

void print_line(int n)
{
int m = 0;
if (n > 0)
{
while (m < n)
{
_putchar('_');
m++;
}
}
_putchar('\n');
}
