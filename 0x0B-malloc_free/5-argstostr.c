#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 *
 * @ac: total of arguments
 * @av: arguments
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
int a, b;
int c = 0;
int size = 0;
char *str;
if (ac == 0 || av == NULL)
{
return ('\0');
}
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
size++;
}
}
str = malloc((ac + size + 1) * sizeof(char));
if (str == NULL)
{
free(str);
return ('\0');
}
size = size + ac + 1;
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b]; b++)
{
str[c] = av[a][b];
c++;
}
str[c] = '\n';
c++;
}
return (str);
}
