#include "main.h"
#include <stdio.h>
/**
 *leet - encodes 1337
 *@str: points  string
 *Return: (pointer to str)
*/
char *leet(char *str)
{
char *ptr = str;
char replacements[10] = "aAeEoOtTlL";
char encoded[10] = "4433007711";
int i;

while (*ptr != '\0')
{
i = 0;
while (replacements[i] != '\0')
{
if (*ptr == replacements[i])
{
*ptr = encoded[i];
break;
}
i++;
}
ptr++;
}

return (str);
}

