#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
long a = 612852475143;
int flag;
long b, c;
for (b = 2; b <= a; b++)
{
if (a % b == 0)
{
flag = 0;
for (c = 2; c <= (b / 2); c++)
{
if (b % c == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
{
if ((a / b) == 1)
{
printf("%ld\n", a);
}
a = a / b;
}
}
}
return (0);
}
