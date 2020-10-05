#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: content of the chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int b, c;

for (b = 0; b < 8; b++)
{
for (c = 0; c < 8; c++)
{
_putchar(a[b][c]);
if (c == 7)
{
_putchar('\n');
}
}
}
}
