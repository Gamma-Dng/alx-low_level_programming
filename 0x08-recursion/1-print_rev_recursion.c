#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 *@s: pointer to the string printed
 *Return: (character)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
return;
}
_print_rev_recursion(s + 1);
printf("%c", *s);
}
