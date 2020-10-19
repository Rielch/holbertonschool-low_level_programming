#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 *
 * @d: struct
 * Return: Void.
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
if (d->name != NULL)
{
printf("%s\n", d->name);
}
else
{
printf("(nil)\n");
}
printf("Age: ");
if (d->age < 0)
{
printf("(nil)\n");
}
else
{
printf("%f\n", d->age);
}
printf("Owner: ");
if (d->owner == NULL)
{
printf("(nil)\n");
}
else
{
printf("%s\n", d->owner);
}
}
}
