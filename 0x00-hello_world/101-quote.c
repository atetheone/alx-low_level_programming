#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description! print Dora's quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(t);

	write(2, t, s);
	return (1);
}
