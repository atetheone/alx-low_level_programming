#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets in lowercase separated by comas
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		if (c != 'z')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
