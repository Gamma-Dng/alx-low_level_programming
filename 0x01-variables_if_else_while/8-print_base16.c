#include <stdio.h>
/**
 * main - entry point
 * Return: (0) (success)
 */
int main(void)
{
int a;
int b;
for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
