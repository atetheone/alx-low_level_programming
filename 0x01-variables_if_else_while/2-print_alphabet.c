#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
