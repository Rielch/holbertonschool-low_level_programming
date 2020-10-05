#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string of text
 * @accept: set of characters
 * Return: number of bytes in the inicial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, c;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
c++;
break;
}
else if (accept[b + 1] == '\0')
{
return (c);
}
}
}
return (c);
}
