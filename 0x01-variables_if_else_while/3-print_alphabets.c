#include <stdio.h>

/**
 * main - entry point
 * Return: (0) (success)
 */
int main(void)
{
	char x;
char y;
for (x = 'a' ; x <= 'z' ; x++)
{
putchar (x);
}
for (y = 'A' ; y <= 'Z' ; y++)
{
putchar (y);
}
putchar ('\n');
return (0);
}