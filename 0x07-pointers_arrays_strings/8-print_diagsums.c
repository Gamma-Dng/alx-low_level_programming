#include <stdio.h>
#include "main.h"
/**
 *print_diagsums- prints sum of diagonals
 *@a: value of a
 *@size: size of diagonal
 *Return: (integer)
 */
void print_diagsums(int *a, int size)
{
int sum_major_diagonal = 0;
int sum_minor_diagonal = 0;
int i;
for (i = 0; i < size; i++)
{
sum_major_diagonal += a[1 * size + i];
sum_minor_diagonal += a[i * size + (size - 1 - i)];
}
printf("major_diagonal : %d\n",  sum_major_diagonal);
printf("minor_diagonal : %d\n", sum_minor_diagonal);
}
