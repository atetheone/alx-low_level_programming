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
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf(" and is greater than 5\n");
	else if (n % 10 == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
