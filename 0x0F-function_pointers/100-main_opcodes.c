#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of the main function
 *
 * @argc: size of argv
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
int a, b;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
for (b = 0; b < (a - 1); b++)
{
printf("%02hhx ", ((char *)main)[b]);
}
if (a != 0)
{
printf("%02hhx\n", ((char *)main)[b]);
}
return (0);
}
