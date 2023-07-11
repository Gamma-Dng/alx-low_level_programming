
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_strspn - gets length of a prefix substring
 *@accept: enter value of string
 *@s: value of s
 *Return: (integer)
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}


