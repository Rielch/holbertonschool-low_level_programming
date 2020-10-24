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
prt[b].f(str, list);
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
 * @str: separator
 * @list: element to print
 */

void print_int(char *str, va_list list)
{
printf("%s%d", str, va_arg(list, int));
}

/**
 * print_char - prints a char
 *
 * @str: separator
 * @list: element to print
 */

void print_char(char *str, va_list list)
{
printf("%s%c", str, va_arg(list, int));
}

/**
 * print_float - prints a float
 *
 * @str: separator
 * @list: element to print
 */

void print_float(char *str, va_list list)
{
printf("%s%f", str, va_arg(list, double));
}

/**
 * print_str - prints a string
 *
 * @str: separator
 * @list: element to print
 */

void print_str(char *str, va_list list)
{
char *temp;
temp = va_arg(list, char *);
if (temp == NULL)
{
temp = "(nil)";
}
printf("%s%s", str, temp);
}
