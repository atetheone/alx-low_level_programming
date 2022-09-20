#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: triangle height
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j, n;

	n = size;
	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < n; j++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
