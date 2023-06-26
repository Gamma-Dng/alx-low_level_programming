
#include "main.h"
#include <stdio.h>
/**
  *_strlen- returns a string
  *@s: string characters
  *Return: (integer)
  */
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
