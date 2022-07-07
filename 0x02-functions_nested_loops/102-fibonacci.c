#include <stdio.h>

/**
 * main - fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a, b, fib, i;
	
	a = 0;
	b = 1;
	printf("%d, %d, ", a, b);
	for (i = 2; i <= 50; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
		if ( i < 50)
			printf("%d, ", fib);
		else
			printf("%d", fib);
	}
	return (0);
}
