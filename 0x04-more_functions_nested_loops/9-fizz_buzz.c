#include <stdio.h>
/**
 * main - entry point
 * return - always 0
 */

int main(void)
{
int a = 1;
while (a <= 100)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", a);
}
a++;
}
return (0);
}
