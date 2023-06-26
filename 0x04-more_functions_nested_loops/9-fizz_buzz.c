#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *Return: (0) (success)
 */
int main(void)
{
int k;
for (k = 1; k <= 100; k++)
{
if (k % 3 == 0)
printf("Fizz");
else if (k % 5 == 0)
printf("Buzz");
else if (k % 15 == 0)
printf("FizzBuzz");
else
printf("%d", k);
if (k < 100)
printf(" ");
}
printf("\n");
return (0);
}








