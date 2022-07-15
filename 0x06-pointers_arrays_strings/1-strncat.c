#include "main.h"

/**
 * _strncat - concatenation of two strings
 * @dest: first string, the destination
 * @src: second string, the source
 * @n: number of letters to concatenate from the second string
 * Return: dest = dest + src(from 0 to n)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len) != '\0')
		len++;
	while (len2 < n)
	{
		*(dest + len) = *(src + len2);
		if (*(src + len2) == '\0')
			break;
		len++;
		len2++;
	}
	*(dest + len) = '\0';
	return (dest);
}
