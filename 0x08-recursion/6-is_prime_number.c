#include "holberton.h"

/**
 * is_prime_number - determines if a number is or not prime
 *
 * @n: number
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
int b = 2;
b = chkprime(n, b);
return (b);
}

/**
 * chkprime - checks if the number is prime
 *
 * @n: number
 * @b: checking variable
 * Return: 0 if no prime and 1 if prime
 */

int chkprime(int n, int b)
{
if ((n % b == 0 && n != b) || n <= 1)
{
return (0);
}
else if (n == b)
{
return (1);
}
else
{
b++;
return (chkprime(n, b));
}
}
