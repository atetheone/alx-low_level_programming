#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */

void print_square(int size)
{
	int len;
	int width;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
