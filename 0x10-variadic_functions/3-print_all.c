#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format of the argument
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
va_list list;
char *str = "";
int a = 0, b;
func_list prt[] = {
{"i", print_int},
{"c", print_char},
{"f", print_float},
{"s", print_str},
{NULL, NULL},
};
va_start(list, format);
while (format[a] && format)
{
b = 0;
while (prt[b].ch != NULL)
{
if (format[a] == prt[b].ch[0])
{
printf("%s", str);
prt[b].f(list);
str = ", ";
break;
}
b++;
}
a++;
}
printf("\n");
}

/**
 * print_int - prints an int
 *
 * @list: element to print
 */

void print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_char - prints a char
 *
 * @list: element to print
 */

void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_float - prints a float
 *
 * @list: element to print
 */

void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_str - prints a string
 *
 * @list: element to print
 */

void print_str(va_list list)
{
char *str = va_arg(list, char *);
if (str == NULL)
{
*str = "(nil)";
}
printf("%s", str);
}
