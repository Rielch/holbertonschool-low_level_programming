#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int hex;
int n = *"\n";
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
for (hex = 'a'; hex <= 'f'; hex++)
putchar(hex);
putchar(n);
return (0);
}
