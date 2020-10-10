#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: size of argv
 * @argv: arguments given to the program
 * Return: 0 if correct, 1 if incorrect imput
 */

int main(int argc, char **argv)
{
int a, b;
if (argc != 3)
{
puts("Error");
return (1);
}
else
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", (a *b));
}
return (0);
}
