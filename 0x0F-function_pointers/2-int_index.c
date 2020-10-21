#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: function to compare
 * Return: first index or -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a, test;
if (cmp != NULL && array != NULL)
{
if (size <= 0)
{
return (-1);
}
for (a = 0; a < size; a++)
{
test = cmp(array[a]);
if (test != 0)
{
return (a);
}
}
}
return (-1);
}
