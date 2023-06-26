
#include "main.h"
/**
 *print_array - prints elements in an array
 *@a: value of a
 *@n: value of n
 *Return: (integer)
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar(*a[i]);
}
_putchar('\n');
}
