#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all numbers withoout using type char
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
