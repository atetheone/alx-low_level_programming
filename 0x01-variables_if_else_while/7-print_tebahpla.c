#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
