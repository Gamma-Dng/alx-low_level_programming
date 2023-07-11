#include "main.h"
/**
 *_memset - fills n bytes pointed by s to b
 *@b: value of b
 *@s: value of s
 *@n: value to be copied
 *Return: (integer)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *initial_s = s;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (initial_s);
}
