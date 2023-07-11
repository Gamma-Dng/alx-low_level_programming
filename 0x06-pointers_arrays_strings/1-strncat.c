#include "main.h"
#include <stdio.h>
/**
 **_strncat - concatenates strings
 *@dest: value of dest
 *@src:value of source
 *@n: value of n
 *Return: (character)
*/
char *_strncat(char *dest, char *src, int n)
{
char *temp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (temp);
}
