#include "main.h"

/**
 * _memset - memset
 * @s: src
 * @b: destnation
 * @n: number of bytes
 * Return: a pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
