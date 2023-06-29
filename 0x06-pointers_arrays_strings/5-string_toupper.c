#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *string_toupper - changes lowercase to uppercase of a string
 *@str: string
 *Return: (character)
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
*ptr = toupper(*ptr);
ptr++;
}
return (str);
}

