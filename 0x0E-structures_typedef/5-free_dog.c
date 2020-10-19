#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 *
 * @d: structure
 * Return: void.
 */

void free_dog(dog_t *d)
{
free(d);
free(*d);
}
