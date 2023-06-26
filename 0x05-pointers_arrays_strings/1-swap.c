#include "main.h"
#include <stdio.h>
/**
  *swap_int - reset a value to 98
  *@a: value of a
  *@b: value of b
  *Return: (integer)
  */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
