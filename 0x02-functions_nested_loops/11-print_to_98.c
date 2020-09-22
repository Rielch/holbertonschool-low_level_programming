#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: to be declared
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int a;
if (n >= 98)
{
for (a = n; a >= 98; a--)
{
if (a != 98)
{
printf("%d, ", a);
}
else
{
printf("%d\n", a);
}
}
}
else
{
for (a = n; a <= 98; a++)
{
if (a != 98)
{
printf("%d, ", a);
}
else
{
printf("%d\n", a);
}
}
}
}
