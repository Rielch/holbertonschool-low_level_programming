#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int n = *"\n";
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar(n);
return (0);
}
