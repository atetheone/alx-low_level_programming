#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet separated by comas all combinations of 2
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int c, d;

	for (c = 48; c <= 57; c++)
	{
		for (d = 49; d <= 57; d++)
		{
			putchar(c);
			putchar(d);
			if (c != 56 && d != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
