#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple operations between two numbers
 *
 * @argc: size of argv
 * @argv: arguments taken for the program
 * Return: always 0
 */

int main(int argc, char **argv)
{
int a;
int b;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
{
return (0);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if (get_op_func(argv[2]) == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
