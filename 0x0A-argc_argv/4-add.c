#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - adds positive numbers
 *
 * @argc: size of argv
 * @argv: arguments given to the program
 * Return: 0 if correct, 1 if incorrect imput
 */

int main(int argc, char **argv)
{
int a;
int b = 0;
for (a = 1; a < argc; a++)
{
if (chkstr(argv[a]) == 1)
{
puts("Error");
return (1);
}
b = b + atoi(argv[a]);
}
printf("%d\n", b);
return (0);
}

/**
 * chkstr - verify that the strings is only digits
 *
 * @argv: string to check
 * Return: 0 if is only digits, 1 if not.
 */

int chkstr(char *argv)
{
int a;
for (a = 0; argv[a] != '\0'; a++)
{
if (argv[a] < '0' || argv[a] > '9')
{
return (1);
}
}
return (0);
}
