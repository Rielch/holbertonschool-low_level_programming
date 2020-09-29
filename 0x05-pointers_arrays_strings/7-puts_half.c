#include "holberton.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: string
 * Return: Void.
 */

void puts_half(char *str)
{
int a, b;
for (a = 0; *(str + a) != '\0'; a++)
{
}
for (b = (a + 1) / 2; b <= a; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
