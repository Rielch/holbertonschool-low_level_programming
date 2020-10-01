#include "holberton.h"

/**
 * _strcmp - compares two srtings.
 *
 * @s1: string to compare.
 * @s2: string to comapre.
 * Return: Integer indicating the result of the comparision.
 */

int _strcmp(char *s1, char *s2)
{
int a, b, size1, size2;
size1 = 0;
size2 = 0;
for (a = 0; s1[a] != '\0'; a++)
{
size1 = size1 + s1[a];
}
for (b = 0; s2[b] != '\0'; b++)
{
size2 = size2 + s2[b];
}
return (size1 - size2);
}
