#include "holberton.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string
 * Return: integer.
 */

int _atoi(char *s)
{
  int a, b, c, res, sig, size;
  for (size = 0; s[size] != '\0'; size++)
    {
    }
  for (a = 0; s[a] < '0' || s[a] > '9'; a++)
    {
      if (a == size)
	{
	  return (0);
	}
    }
  for (; s[a] >= '0' && s[a] <= '9'; a++)
    {
      res = (res * 10) + s[a];
      if (a == size)
	{
	  return (res);
	}
    }
  for (b = 0; b < a; b++)
    {
      if (s[b] == '-')
	{
	  c++;
	}
    }
  if (c % 2 == 0)
    {
      sig = 1;
    }
  else
    {
      sig = -1;
    }
  res = res * sig;
  return (res);
}
