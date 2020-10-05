#include "holberton.h"

/**
 * _strstr - locates a substing
 *
 * @haystack: string
 * @needle: string to be searched
 * Return: pointer to the beginning of @needle.
 */

char *_strstr(char *haystack, char *needle)
{
int a, b;
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a + b] == needle[b])
{
if (needle[b + 1] == '\0')
{
return (&haystack[a]);
}
continue;
}
else
{
break;
}
}
}
return (haystack);
}
