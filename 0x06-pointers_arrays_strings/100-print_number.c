#include "holberton.h"

/**
 * print_number - prints an integer
 *
 * @n: number.
 * Return: Void.
 */

void print_number(int n)
{
  if (n < 0)
    {
      _putchar('-');
      n = n * -1;
    }
  if (n > 999)
    {
      _putchar((n / 1000) % 10);
    }
  if (n > 99)
    {
      _putchar((n / 100) % 10);
    }
  if (n > 9)
    {
      _putchar((n / 10) % 10);
    }
  _putchar(n % 10);
}
