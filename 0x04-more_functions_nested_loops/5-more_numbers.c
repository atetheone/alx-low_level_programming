#include "main.h"

/**
 * more_numbers - prints an integers from 0 to 14, 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int count, times;

	for (times = 0; times < 10; times++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
				_putchar((count / 10) + 48);
			_putchar((count % 10) + 48);
		}
		_putchar('\n');
	}
}
