#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - returns power of a number
 *@x: value of x
 *@y: value of power
 *Return: (integer)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
