#include <stdio.h>

/**
 * main - prints all arguments given to the program
 *
 * @argc: size of argv
 * @argv: arguments given to the program
 * Return: always 0.
 */

int main(int argc, char **argv)
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
