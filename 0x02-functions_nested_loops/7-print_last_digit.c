#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: is an a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
