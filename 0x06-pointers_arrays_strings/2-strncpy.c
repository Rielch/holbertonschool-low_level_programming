#include "holberton.h"

/**
 * _strncpy - copies a string.
 *
 * @src: string to be copied.
 * @dest: destiny of copy.
 * @n: ammount of characters to copy.
 * Return: pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a, b;
b = 0;
for (a = 0; a < n && dest[a] != '\0'; a++)
{
dest[a] = src[a];
if (b > 0)
{
dest[a] = '\0';
}
if (src[a] == '\n')
{
b++;
}
}
return (dest);
}
