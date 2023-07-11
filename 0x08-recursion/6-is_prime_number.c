#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - return if input integer is prime number
 *@n: value of n
 *@d: int
 *Return: (0) or (1)
 */
int check_prime(int n, int d);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 *check_prime - checks for prime numbers
 *@n: int
 *@d: int
 *Return: int
 */
int check_prime(int n, int d)
{
if (d >= n && n > 1)
{
return (1);
}
else if (n % d == 0 || n <= 1)
{
return (0);
}
else
{
return (check_prime(n, d + 1));
}
}
