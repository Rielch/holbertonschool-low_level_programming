#include "holberton.h"

/**
 * _pow_recursion - returns the power of x raised to the power of y
 *
 * @x:number to be raised
 * @y: exponential
 * Return: value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 1)
{
return (x);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, (y - 1)));
}
