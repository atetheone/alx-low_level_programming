#include <stdio.h>

/**
 * main - prints fizz buzz problem.
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0)
			printf("Fizz");
		if (count % 5 == 0)
			printf("Buzz");
		if (count % 3 != 0 && count % 5 != 0)
			printf("%d", count);
		if (count == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
