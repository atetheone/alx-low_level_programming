#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase separated by comas
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
