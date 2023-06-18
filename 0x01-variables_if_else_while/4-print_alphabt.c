#include <stdio.h>
/**
 * main - entry point
 * Return: (0) (success)
 */
int main(void)
{
int b = 'a';
while (b <= 'z')
{
if ((b != 'e' && b != 'q') && b <= 'z')
putchar(b);
b++;
}
putchar('\n');
return (0);
}
