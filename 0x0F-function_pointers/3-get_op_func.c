#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 *
 * @s: operator
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while (i < 5)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
