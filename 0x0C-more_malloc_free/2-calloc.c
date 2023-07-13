#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory using malloc
 *@nmemb:  array length
 *@size: size for each element
 *Return: (pointer)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
m = malloc(nmemb * size);
if (m != NULL)
{
for (i = 0; i < (nmemb * size); i++)
m[i] = 0;
return (m);
}
else
return (NULL);
}
