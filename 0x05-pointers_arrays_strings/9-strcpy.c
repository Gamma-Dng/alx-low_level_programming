#include "main.h"
/**
 **_strcpy - prints elements in an array
 *@src: value of source
 *@dest: value of dest
 *Return: (integer)
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0') 
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';  
return dest;
}
