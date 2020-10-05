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
int a, b;
unsigned int c;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
c++;
break;
}
}
if (s[a + 1] == '\0')
{
return (c);
}
}
return (c);
}
