#include "holberton.h"
/**
 * more_numbers - Entry point
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int n = 0;
int m = 0;
int a, b;
while (n <= 9)
{
while (m <= 14)
{
a = m / 10;
b = m % 10;
if (a != 0)
{
_putchar(a + '0');
}
_putchar(b + '0');
m++;
}
_putchar('\n');
n++;
}
}
