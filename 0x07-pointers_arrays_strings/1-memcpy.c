#include "main.h"
/**
 *_memcpy - copies n bytes from src to dest
 *@dest: destination
 *@src: source
 *@n: value to be copied
 *Return: (integer)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *initial_dest = dest;
unsigned int i;
for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
return (initial_dest);
}

