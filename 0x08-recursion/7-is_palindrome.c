#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is palindrome and 0 if it's not
 *
 * @s: string
 * Return: 1 if string is palindrome and 0 if it's not
 */

int is_palindrome(char *s)
{
int a = 0;
int b = 0;
a = sumdigit(s, a);
return (chkpalind(s, b, a));
}

/**
 * sumdigit - calculates the length of the string
 *
 * @s: string
 * @a: length
 * Return: length of the string
 */

int sumdigit(char *s, int a)
{
if (s[a] != '\0')
{
a++;
return (sumdigit(s, a));
}
else
{
return (a);
}
}

/**
 * chkpalind - checks if a strings is palindrome
 *
 * @s: string
 * @b: return value
 * @a: length of the string
 * Return: 1 if palindrome and 0 if not
 */

int chkpalind(char *s, int b, int a)
{
if ((b == (a - b) && (a % 2 == 0)) || (b == (a - b - 1) && (a % 2 == 1)))
{
return (1);
}
else if (s[b] == s[a - b - 1])
{
b++;
return (chkpalind(s, b, a));
}
else
{
return (0);
}
}
