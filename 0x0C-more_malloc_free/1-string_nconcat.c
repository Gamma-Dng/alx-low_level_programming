#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concanates two strings
 *@s1: pointer to string one
 *@s2:  pointer to string two
 *@n: bytes from concatination
 *Return: (void)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, s1len, s2len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (s1len = 0; s1[s1len] != '\0'; s1len++)
for (s2len = 0; s2[s2len] != '\0'; s2len++)
str = malloc(s1len + n + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}
