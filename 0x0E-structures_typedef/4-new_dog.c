#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
{
return (NULL);
}
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
return (ndog);
}
