#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: seconde string
 * @n: fisrt bytes of s2 to be copied
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1, size2, a;
char *str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (size1 = 0; s1[size1] != '\0'; size1++)
{
}
for (size2 = 0; s2[size2] != '\0' && size2 < n; size2++)
{
}
str = malloc((size1 + size2 - 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (a = 0; a < size1; a++)
{
str[a] = s1[a];
}
for (; a < size1 + size2; a++)
{
str[a] = s2[a - size1];
}
str[a] = '\0';
return (str);
}
