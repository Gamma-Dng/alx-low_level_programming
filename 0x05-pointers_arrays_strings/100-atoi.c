#include "main.h"
/**
 *_atoi - converts string to an integer
 *@s: value of s
 *Return: (character)
 */
int _atoi(char *s}
{
while (*s && isspace(*s))
{
s++;
}
if (*s == '\0')
{
return (0);
}
int sign = 1;
if (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -1;
}
s++;
}
int result = 0;
while (*s && isdigit (*s))
{
result = (i result * 10 + (*s - '0'));
s++;
}
return (sign * result);
}
