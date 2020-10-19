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
ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
{
free(ndog);
return (NULL);
}
 ndog->name = name;
 ndog->age = age;
 ndog->owner = owner;
 name2 = malloc(sizeof(*name));
 if (name2 == NULL)
   {
     free(name2);
     free(ndog);
     return (NULL);
   }
 owner2 = malloc(sizeof(*owner));
 if (owner2 == NULL)
   {
     free(name2);
     free(owner2);
     free(ndog);
     return (NULL);
   }
 if (name != NULL)
   {
     while (*name != '\0')
       {
	 *name2 = *name;
	 name++;
	 name2++;
       }
     *(name2 + 1) = '\0';
   }
 if (owner != NULL)
   {
     while (*owner != '\0')
       {
	 *owner2 = *owner;
	 owner++;
	 owner2++;
       }
     *(owner2 + 1) = '\0';
   }
return (ndog);
}
