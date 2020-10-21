#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function for each element of an array
 *
 * @array: array of parameters
 * @size: size of the array
 * @action: function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (action != NULL)
{
for (a = 0; a < size; a++)
{
action(array[a]);
}
}
}
