#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints n elments of an array
 *
 * @a: array
 * @n: number of elements
 * Return: Void.
 */

void print_array(int *a, int n)
{
  int b;
  for (b = 0; b < n; b++)
    {
      printf("%d", *(a + b));
      if (b < (n - 1))
	{
	  printf(", ");
	}
    }
  putchar('\n');
}
