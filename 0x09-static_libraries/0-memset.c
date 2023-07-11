#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_memset - fills n bytes pointed by s to b
 *@b: value of b
 *@s: value of s
 *@n: value to be copied
 *Return: (integer)
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}


