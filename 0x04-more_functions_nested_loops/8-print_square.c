
include "main.h"
/**
 *print_square - Prints lines
 *@size:size of square
 *Return: (integer)
 */
void print_square(int size)
{
int k, l;
if (size <= 0)
_putchar('\n');
for (k = 0; k < size; k++)
{
for (l = 0; l < (size); l++)
{
_putchar('#');
}
_putchar('\n');
}
}
