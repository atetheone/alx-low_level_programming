#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets of hexadecimal
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
