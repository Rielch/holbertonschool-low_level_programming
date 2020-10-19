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
char *name2;
char *owner2;
if (name == NULL || owner == NULL)
{
return (NULL);
}
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
{
free(ndog);
return (NULL);
}
 name2 = malloc(sizeof(*name));
 if (name2 == NULL)
   {
     free(name2);
     free(ndog);
     return (NULL);
   }
 name2 = name;
 owner2 = malloc(sizeof(*owner));
 if (owner2 == NULL)
   {
     free(ndog);
     free(owner2);
     free(name2);
     return (NULL);
   }
 owner2 = owner;
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
 return (ndog);
}
