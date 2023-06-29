#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *cap_string- capitilizes all words strings
 *@str: pointer of the string
 *Return: (character)
*/
char *cap_string(char *str)
{
char *ptr = str;
int cap = 1;
while (*ptr != '\0')
{
if (cap && islower(*ptr))
*ptr = toupper(*ptr);
cap = (*ptr == ' ' || *ptr == '\t' || *ptr == '\n'
|| *ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '('
|| *ptr == ')' || *ptr == '{' ||
*ptr == '}');
ptr++;
}
return (str);
}
