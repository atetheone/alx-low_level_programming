#include "main.h"

/**
 * print_line - prints a straight line.
 * @n: line length
 * Return: no return.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
