#include "main.h"
#include <stdio.h>

/**
 * times_table - print times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int p;
	int x;

	for (p = 0; p < 10; p++)
	{
		for (x = 0; x < 10; x++)
		{
			printf("%d ", p * x);
		}
		printf("\n");
	}
}
