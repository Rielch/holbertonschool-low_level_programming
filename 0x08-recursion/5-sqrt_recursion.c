#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
int b = 1;
b = chksqrt(n, b);
return (b);
}

/**
 * chksqrt - checks if b is the square root of n
 *
 * @n: number
 * @b: root
 * Return: root of n
 */

int chksqrt(int n, int b)
{
if (n == (b *b))
{
return (b);
}
else if (b == n || n < 0)
{
return (-1);
}
else
{
b++;
}
return (chksqrt(n, b));
}
