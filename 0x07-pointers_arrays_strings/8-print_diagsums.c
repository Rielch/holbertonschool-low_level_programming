#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int b, c, sum, sum2;
sum = 0;
sum2 = 0;
for (b = 0; b < size; b++)
{
sum = sum + a[b + (size * b)];
}
for (; b >= 0; b--)
{
for (c = 0; c < size; c++)
{
if (c + b == size - 1)
{
sum2 = sum2 + a[b + (size * c)];
}
}
}
printf("%d, %d\n", sum, sum2);
}
