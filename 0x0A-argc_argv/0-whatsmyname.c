#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: size of argv
 * @argv: arguments to file
 * Return: always 0.
 */

int main(int argc, char **argv)
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
