#include <stdio.h>

/**
 * main - fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i;
	long int a, b, fib;
	
	a = 0;
	b = 1;
	for (i = 2; i <= 50; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (i < 50)
			printf("%ld, ", fib);
		else
			printf("%ld", fib);
	}
	return (0);
}
