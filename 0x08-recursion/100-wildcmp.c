#include "holberton.h"

/**
 * wildcmp - compares two strings, * is a wildcard
 *
 * @s1: first string
 * @s2: second string
 * Return: 1 if identicals, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp((s1 + 1), (s2 + 1)));
}
else if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, (s2 + 1)));
}
else if (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)))
{
return (1);
}
}
return (0);
}
