#include <stdlib.h>
#include <time.h>
#include <stdi.oh>
/**
 * main - entry point
 * Return: (0) (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d : positive\n", n);
	}
	else if (n == 0)
	{
	printf("% : zero\n", n);
	}
	else
	{
	printf("%d : negative\n", n);
	}
	return (0);
}
