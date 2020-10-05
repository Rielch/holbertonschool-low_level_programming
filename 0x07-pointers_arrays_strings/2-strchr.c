#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string of text
 * @c: character to search
 * Return: pointer to the first ocurrence of the letter
 */

char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] != c; a++)
{
if (s[a + 1] == '\0' && s[a + 1] != c)
{
return ('\0');
}
}
return (&s[a]);
}
