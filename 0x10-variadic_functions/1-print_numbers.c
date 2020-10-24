#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all given numbers
 *
 * @n: ammount of arguments
 * @separator: separator between numbers
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
if (n > 0 && n != NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(list, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
else if (i == n - 1)
{
printf("\n");
}
}
}
va_end(list);
}
