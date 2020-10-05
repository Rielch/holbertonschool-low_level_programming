#include "holberton.h"

/**
 * _memset - fills the memory with a constant byte
 *
 * @s: pointer to memory
 * @b: byte to fill the memory
 * @n: numbers of bytes in memory to fill
 * Return: pointer to memory @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
