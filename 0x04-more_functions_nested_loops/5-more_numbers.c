
#include "main.h"
/**
 *more_numbers - Prints digits from 0 to 14
 *Return: (void)
 */
void more_numbers(void)
{
int n, i;
for (n = 0; n <= 10; n++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
_putchar('l');
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
