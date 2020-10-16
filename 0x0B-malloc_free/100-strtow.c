#include "holberton.h"
#include <stdlib.h>

/**
 * splits a string into words
 * 
 * @str: string
 * Return: pointer to array
 */

char **strtow(char *str)
{
  int size, b, words;
  char *newstr;
  if (str == NULL || str == "")
    {
      return (NULL);
    }
  for (size = 0; str[size] != '\0'; size++)
    {
      if (str[size] != ' ' && (str[size + 1] == ' ' || str[size + 1] == '\0'))
	{
	  words++;
	}
    }
  newstr = malloc(words * sizeof(char *));
  if (newstr == NULL)
    {
      return (NULL);
    }
  for (size = 0; str[size] 1= '\0'; size++)
    {
      if (str[size] != ' '
    }
}
