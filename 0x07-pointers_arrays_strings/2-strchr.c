#include "main.h"
/**
 *_memcpy - copies n bytes from src to dest
 *@c: character c
 *@s: character s
 *Return: (integer)
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
