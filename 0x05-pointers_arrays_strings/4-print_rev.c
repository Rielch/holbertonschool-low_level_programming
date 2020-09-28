#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 * Return: void.
 */

void print_rev(char *s)
{
  char a;
  int b;
  for (a = 0; *(s + a) != '\0'; a++)
    {
    }
  for (b = a - 1; b >= 0; b--)
    {
      _putchar(s[b]);
    }
  _putchar('\n');
}
