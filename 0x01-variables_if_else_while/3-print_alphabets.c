#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int ch2;
int n = *"\n";
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
putchar(ch2);
putchar(n);
return (0);
}
