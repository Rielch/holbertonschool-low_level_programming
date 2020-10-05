#include "holberton.h"

/**
 * _memcpy - copies memory area
 *
 * @src: source memory to copy
 * @dest: destiny to copy memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
