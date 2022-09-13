#include "main.h"
/**
 * times_table - Print the 9 times table, starting from 0
 * Return: 0
 */
void times_table(void)
{
	int x = 0;
	int i;
	int z;

	while (x < 10)
	{
		i = 0;
		while (i < 10)
		{
			z = x * i;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (i != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		x++;
	}
}
