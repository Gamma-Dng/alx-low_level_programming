#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 **_strncat - concatenates strings
 *@dest: value of dest
 *@src:value of source
 *@n: value of n
 *Return: (character)
*/
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}


