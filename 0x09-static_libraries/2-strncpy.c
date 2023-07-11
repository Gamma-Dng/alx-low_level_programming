#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_strncpy - copy strings
 *@dest: value of dest
 *@src:value of source
 *@n: value of n
 *Return: (character)
*/
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}

