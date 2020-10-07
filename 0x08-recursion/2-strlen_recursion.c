#include "holberton.h"

/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: string
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
int len = 0;
if (*s != '\0')
{
len = _strlen_recursion(s + 1);
len++;
}
return (len);
}
