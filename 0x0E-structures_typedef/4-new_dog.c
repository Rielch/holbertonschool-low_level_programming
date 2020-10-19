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
return (NULL);
}
name2 = malloc(sizeof(char) * _strlen(name) + 1);
if (name2 == NULL)
{
free(ndog);
}
_strcpy(name2, name);
owner2 = malloc(sizeof (char) * _strlen(owner) + 1);
if (owner2 == NULL)
{
free(ndog);
free(name2);
}
_strcpy(owner2, owner);
ndog->name = name2;
ndog->age = age;
ndog->owner = owner2;
return (ndog);
}

/**
 * _strlen - length of a string
 *
 * @str: string.
 * Return: length.
 */

int _strlen(char *str)
{
int a;
for (a = 0; str[a] != '\0'; a++)
{
}
return (a);
}

/**
 * _strcpy - copy the contents of a string
 *
 * @src: string
 * @dest: destiny
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest);
}
