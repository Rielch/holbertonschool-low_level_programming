#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array of integers.
 *
 * @a: array of integers.
 * @n: lenght of the array.
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
int b, temp;
for (b = 0; b < ((n - 1) / 2); b++)
{
temp = a[b];
a[b] = a[n - 1 - b];
a[n - 1 - b] = temp;
}
}
