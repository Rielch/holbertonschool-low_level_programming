#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * @src: string to appended.
 * @dest: destiny string.
 * Return: Pointer to the result string.
 */

char *_strcat(char *dest, char *src)
{
int size_d, a;
for (size_d = 0; dest[size_d] != '\0'; size_d++)
{
}
for (a = 0; src[a] != '\0'; a++)
{
dest[size_d + a] = src[a];
}
dest[size_d + a] = '\0';
return (dest);
}
