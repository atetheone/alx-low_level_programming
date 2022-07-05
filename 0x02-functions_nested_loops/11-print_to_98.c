#include "main.h"

/**
 * print_to_98 - print numbers between and 98
 * @n: integer number
 * Return: Nothing
 */

void print_to_98(int n)
{
	int a, b;

	if (n < 98)
	{
		a = n;
		b = 98;
	}
	else
	{
		a = 98;
		b = n;
	}
	for (n = a; n <= b; n++)
	{
		if (n < b)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
	printf("\n");
}
