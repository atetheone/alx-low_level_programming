#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the sign of a random number generated
 * it prints a sentence for the number sign
 * Return: Always 0 for success
 *
 */

int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
