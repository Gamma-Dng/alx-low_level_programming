
#include "main.h"
/**
 *more_numbers - Prints digits
 *Return: (void)
 */
void more_numbers(void)
{
int n, i;
for (n = 0; n <= 14; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
_putchar('1');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
