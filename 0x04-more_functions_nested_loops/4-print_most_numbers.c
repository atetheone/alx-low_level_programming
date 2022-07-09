#include "main.h"

/**
 * print_most_numbers - prints an integers from 0 to 9, except 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int count;

	count = 48;
	for (; count <= 57; count++)
	{
		if (count != '2' && count != '4')
			_putchar(count);
	}
	_putchar('\n');
}
