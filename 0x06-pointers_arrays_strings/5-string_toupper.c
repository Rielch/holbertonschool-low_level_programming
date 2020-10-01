#include "holberton.h"

/**
 * string_toupper - change all lower case letters to upper case.
 *
 * @s: string
 * Return: String in upper case.
 */

char *string_toupper(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] <= 'z' && s[a] >= 'a')
{
s[a] = s[a] - 32;
}
}
return (s);
}
