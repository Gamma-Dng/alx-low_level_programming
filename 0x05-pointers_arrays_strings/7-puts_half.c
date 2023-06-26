#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *puts_half -  prints half of character in the string
  *@str: string characters
  *Return: (string)
  */
void puts_half(char *str)
{
int length = strlen(str);
int half = length / 2;
int i;
for (i = half; i < length; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
