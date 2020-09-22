#include "holberton.h"
/**
 *
 *
 */
int print_last_digit(int n)
{
int e;
e = n % 10;
if (e < 0)
{
e = -e;
}
_putchar(e + '0');
return(e);
}
