#include "main.h"

/**
 * print_diagonal - prints a diagonal.
 * @n: diagonal length
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i >= 2 && j <= i - 1)
				_putchar(' ');
			else
				_putchar('\\');
		}
		if (i == n - 1)
			break;
		_putchar('\n');
	}
	_putchar('\n');
}
