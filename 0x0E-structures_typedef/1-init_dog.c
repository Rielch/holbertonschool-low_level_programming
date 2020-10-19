#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable
 *
 * @d: struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (name != NULL)
{
d->name = name;
}
if(age != NULL)
{
d->age = age;
}
if (owner != NULL)
{
d->owner = owner;
}
}
