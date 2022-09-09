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
	char text[] = "and that piece of art is usefule\" - Dora Korpar, 2015-10-19\n";
	int s = strlen(text);
	write(2, text, s);
	return (1);
}
