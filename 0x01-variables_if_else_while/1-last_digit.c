#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	if (n % 10 == 0)
	{
		printf("and is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("and is 0 and is greater than 5\n");
	}

	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
