#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the memory allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *memory;
memory = malloc(b);
if (memory == NULL)
{
exit(98);
}
return (memory);
}
