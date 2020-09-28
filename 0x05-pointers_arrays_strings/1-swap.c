#include "holberton.h"

/**
 * swap_int - swaps the value of 2 int
 *
 * @a: first int
 * @b: second int
 * return: void
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
