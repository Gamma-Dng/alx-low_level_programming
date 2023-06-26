
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *puts2 -  prints every character in the string
  *@str: string characters
  *Return: (string)
  */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
