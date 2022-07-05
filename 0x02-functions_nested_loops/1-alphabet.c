#include "main.h"

/**
 * print_alhabet - print alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char c;

	for (char c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
