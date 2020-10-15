#Include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: pointer to a string
 * Return: pointer to the allocated space in memory
 */

char *_strdup(char *str)
{
char *arr;
int i, size;
for (size = 0; str[size] != '\0'; size++)
{
}
arr = malloc(size * sizeof(char));
for (i = 0; i <= size; i++)
{
arr[i] = str[i];
}
return (arr);
}
