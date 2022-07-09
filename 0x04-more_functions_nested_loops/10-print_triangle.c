#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @n: triangle height
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j, n;

	n = size;
	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
