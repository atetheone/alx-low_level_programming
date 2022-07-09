#include "main.h"

/**
 * print_square - prints a square.
 * @n: sqaure size.
 * Return: no return.
 */
void print_size(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}
