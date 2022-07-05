#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print time
 *
 * Return: Nothing
 */

void jack_bauer(void)
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
