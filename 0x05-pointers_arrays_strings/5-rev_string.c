#include "holberton.h"

/**
 * rev_string - reverse a string
 *
 * @s: string of text
 * Return: void.
 */

void rev_string(char *s)
{
int a, b;
char *c, *d, e;
c = s;
d = s;
for (a = 0; *(s + a) != '\0'; a++)
{
}
for (b = 0; b < a - 1; b++)
{
d++;
}
for (b = 0; b < a / 2; b++)
{
e = *d;
*d = *c;
*c = e;
c++;
d--;
}
}
