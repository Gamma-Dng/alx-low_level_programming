#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_strpbrk - searches a string for any set of bytes
 *@accept: enter value of string
 *@s: points to the accepted string
 *Return: (integer)
 */
char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}

