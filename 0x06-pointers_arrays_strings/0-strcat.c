#include "main.h"
#include <stdio.h>
/**
 **_strcat - concatenates strings
 *@dest: value of dest
 *@src:value of source
 *Return: (character)
*/
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}
