#include "main.h"
/**
 **_strcpy - prints elements in an array
 *@src: value of source
 *@dest: value of dest
 *Return: (integer)
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[1] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
