#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 *
 * @size: size of the array
 * @c: Character to inicialize te array
 * Return: Array.
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size == 0)
{
return (0);
}
else
{
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return ('\0');
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
return (0);
}
