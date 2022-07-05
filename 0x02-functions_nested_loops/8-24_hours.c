#include "main.h"

/**
 * jack_bauer - print time
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hour < 10)
				_putchar('0' + hour);
			else
			{
				_putchar(hour);
			}
			_putchar(':');
			if (min < 10)
				_putchar('0' + min);
			else
				_putchar(min);
		}
		_putchar('\n');
	}
}
