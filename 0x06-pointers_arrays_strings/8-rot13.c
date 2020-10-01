#include "holberton.h"

/**
 * rot13 - encodes a string with rot13.
 *
 * @s: string
 * Return: encoded string.
 */

char *rot13(char *s)
{
char ch[53] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char ch13[53] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
int a, b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; ch[b] != '\0'; b++)
{
if (s[a] == ch[b])
{
s[a] = ch13[b];
break;
}
}
}
return (s);
}
