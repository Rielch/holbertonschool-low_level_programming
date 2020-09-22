#include "holberton.h"
/**
 *
 *
 */
void print_to_98(int n)
{
int a, b, c, d, e;
if (n > 98)
{
for (a = n; a >= 98; a--)
{
d = a / 100;
b = (a / 10) % 10;
c = a % 10;
if (d != 0)
{
_putchar(d + '0');
}
_putchar(b + '0');
_putchar(c + '0');
if (a != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
else
{
for (a = n; a <= 98; a++)
{
if (a < 0)
{
e = -a;
b = e / 10;
c = e % 10;
_putchar('-');
if (b != 0)
{
_putchar(b + '0');
}
_putchar(c + '0');
_putchar(',');
_putchar(' ');
}
else
{
b = a / 10;
c = a % 10;
if (b != 0)
{
_putchar(b + '0');
}
_putchar(c + '0');
if (a != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
