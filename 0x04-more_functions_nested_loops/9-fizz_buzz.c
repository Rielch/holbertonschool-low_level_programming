#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 1;
while (a <= 100)
{
if ((a % 3 == 0) || (a % 5 == 0))
{
if (a % 3 == 0)
{
printf("Fizz");
}
if (a % 5 == 0)
{
printf("Buzz");
}
}
else
{
printf("%d", a);
}
if (a < 100)
{
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
