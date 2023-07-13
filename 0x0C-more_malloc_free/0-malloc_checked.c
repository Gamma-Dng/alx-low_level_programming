#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked -  allocates memory using malloc
 *@b: integer
 *Return: (void)
 */
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == 0)
exit(98);
return (m);
}
