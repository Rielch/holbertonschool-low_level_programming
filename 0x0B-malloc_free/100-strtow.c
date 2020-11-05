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
  int size, a, b, words, szwrd;
  char **newstr;
  if (str == NULL)
    {
      return (NULL);
    }
  for (a = 0; str[a] != '\0'; a++)
    {
      if (str[a] != ' ')
	{
	  size++;
	  if (str[a + 1] == ' ' || str[a + 1] == '\0')
	    {
	      words++;
	    }
	}
    }
  newstr = malloc(words * sizeof(char *));
  if (newstr == NULL)
    {
      return (NULL);
    }
  for (a = 0; a < words; a++)
    {
      szwrd = 0;
      while (*str[a] != '\0')
	{
	  str[a]++;
	  szwrd++;
	}
      newstr[a] = malloc(szwrd * sizeof(char));
      if (newstr[a] == NULL)
	{
	  free(newstr);
	  for (b = 0; b <= a; b++)
	    {
	      free(newstr[b]);
	    }
	}
    }
  return (newstr);
}
