#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - prints string in reverse
 *@s: pointer to the string printed
 *Return: (character)
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
