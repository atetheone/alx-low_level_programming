#include "main.h"
#include <stdio.h>

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
				printf("0%d", hour);
			else
			{
				printf("%d", hour);
			}
			printf(":");
			if (min < 10)
				printf("0%d", min);
			else
				printf("%d", min);
			printf("\n");
		}
	}
}
