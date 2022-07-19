#include "main.h"

/**
 * _memcpy - memcpy
 * @src: src 
 * @dest: destnation
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *src, char *dest, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
