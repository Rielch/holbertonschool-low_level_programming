#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: size of argv
 * @argv: arguments gived to the program
 * Return: always 0
 */

int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
