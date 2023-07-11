#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copy strings
 *@dest: value of dest
 *@src:value of source
 *@n: value of n
 *Return: (character)
*/
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (temp);
}
