#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - prints string
 *@s: pointer to the string printed
 *Return: (character)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return;
}
printf("%c", *s);
_puts_recursion(s + 1);
}
