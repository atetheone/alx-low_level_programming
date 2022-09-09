#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet separated by comas all combinations of 2 by 2
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int c, d;

	for (c = 0; c <= 99; c++)
	{
		for (d = 0; d <= 99; d++)
		{
			if (c < d)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((d / 10) + 48);
				putchar((d % 10) + 48);
				if (c != 98 || d != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
