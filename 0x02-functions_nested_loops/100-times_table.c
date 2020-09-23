#include "holberton.h"
/**
 * print_times_table - Entry point
 * @n: number of times
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int a, b, c, d, e, f;
if (n < 15 && n > 0)
{
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
f = c / 100;
d = (c / 10) % 10;
e = c % 10;
if (b != 0)
{
if (f != 0)
{
_putchar(f + '0');
}
else
{
_putchar(' ');
}
if ((d != 0 && f == 0) || f != 0)
{
_putchar(d + '0');
}
else
{
_putchar(' ');
}
}
_putchar(e + '0');
if (b != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
