#include <stdio.h>

/**
 * main - compute the sum of elements
 *
 * Return: 0
 */

int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
		if (i % 3 || i % 5)
			sum += i;
	print("%d\n", sum);
	return (0);
}
