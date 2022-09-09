#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet separated by comas all combinations of 3
 *
 *
 * Return: Always 0
 */

int main(void)
{
	int c, d, e;

	for (c = 48; c <= 57; c++)
	{
		for (d = 49; d <= 57; d++)
		{
			for (e = 50; e <= 57; e++)
			{
				if (d < e && c < d)
				{
					putchar(c);
					putchar(d);
					putchar(e);
					if (c != 55 || d != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
