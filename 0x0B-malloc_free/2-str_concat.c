#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory withnboth strings
 */

char *str_concat(char *s1, char *s2)
{
char *arr;
int i;
int size1 = 0;
int size2 = 0;
for (i = 0; s1[i] != '\0'; i++)
{
size1++;
}
for (i = 0; s2[i] != '\0'; i++)
{
size2++;
}
if (size1 == 0 || size2 == 0)
{
return ('\0');
}
arr = malloc((size1 + size2 + 1) * sizeof(char));
if (arr == NULL)
{
return ('\0');
}
for (i = 0; i < (size1 + size2 + 1); i++)
{
if (i < size1)
{
arr[i] = s1[i];
}
else
{
arr[i] = s2[i - size1];
}
}
return (arr);
}
