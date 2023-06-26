#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *rev_string - prints a string in reverse
  *@s: string characters
  *Return: (string)
  */
void rev_string(char *s)
{
	int length = 0, index = 0;
char temp;
while (s[index++])
length++;
for (index = length - 1; index >= length / 2; index--)
{
temp = s[index];
s[index] = s[length - index - 1];
s[length - index - 1] = temp;
}
}
