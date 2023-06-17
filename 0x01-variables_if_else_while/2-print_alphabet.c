#include <stdio.h>
/**
 * main - entry point
 * Return: (0) (success)
 */
int main(void)
{
char b;
b = 'a';
while (b <= 'z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
