#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct op - struct of functions
 *
 * @ch: identifier character
 * @f: function
 */

typedef struct op
{
char *ch;
void (*f)();
} func_list;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(char *str, va_list list);
void print_char(char *str, va_list list);
void print_float(char *str, va_list list);
void print_str(char *str, va_list list);

#endif /* VARIADIC_FUNCTIONS_H */
