#include "holberton.h"
/**
 * _abs - Entry point
 * @n: to be declared
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
return (n);
}
else
{
n = n;
return (n);
}
}
