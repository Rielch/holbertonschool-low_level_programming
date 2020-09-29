#include "holberton.h"

/**
 * _strcpy - copy a string from one buffer to another
 *
 * @src: source string
 * @dest: destiny buffer
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
char *point = dest;
for (; *src != '\0'; src++)
{
*dest = *src;
dest++;
}
*dest = '\0';
return (point);
}
