#include "main.h"
#include <stdio.h>
/**
 *reverse_array- concatenates strings
 *@a: value of a
 *@n: value of n
 *Return: (character)
*/
void reverse_array(int *a, int n)
{
int s = 0;
int e = n - 1;
while (s < e)
{
int temp = a[s];
a[s] = a[e];
a[e] = temp;
s++;
e--;
}
}
