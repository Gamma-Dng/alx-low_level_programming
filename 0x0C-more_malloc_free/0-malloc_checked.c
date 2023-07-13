#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 **malloc_checked - checks allocated memory
 *@b: value of b
 *Return: (void)
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}
return (ptr);
}
