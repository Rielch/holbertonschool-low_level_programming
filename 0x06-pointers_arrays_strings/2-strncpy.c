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
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
if (src[a] == '\n')
{
dest[a + 1] = '\0';
break;
}
}
return (dest);
}
