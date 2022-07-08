#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - return remaing days in a year considering a date
 * @month: month in number
 * @day: day of the month
 * @year:year
 * Return: 0
 */

void print_remaining_days(int month, int day, int year)
{
	int remaining;

	if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
		remaining = 366 - days;
	else
		remaing = 365 - days;
	printf("Day of the year: %d\n", days);
	printf("Remaining days: %d\n", remaining);
}
