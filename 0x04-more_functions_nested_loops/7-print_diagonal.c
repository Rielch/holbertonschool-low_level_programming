#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: number of characters '\' to print
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int a = 0;
int b;
if (n > 0)
{
while (a < n)
{
b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
_putchar('\n');
a++;
}
}
else
{
_putchar('\n');
}
}
