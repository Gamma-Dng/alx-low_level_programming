#include "main.h"
/**
 * print_last_digit - prints the last value
 * @b: The number to be valued
 * Return: (last);
 */
int print_last_digit(int b)

{
int last;
last = b % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
