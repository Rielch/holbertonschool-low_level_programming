#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: elements of the array
 * @size: size in bytes of the elements
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
arr = malloc(nmemb * size);
if (arr == NULL)
{
return (NULL);
}
return (arr);
}
