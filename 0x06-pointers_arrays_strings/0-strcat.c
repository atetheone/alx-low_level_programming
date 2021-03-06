#include "main.h"

/**
 * _strcat - concatenation of two strings
 * @dest: first strng, the destination
 * @src: second string, the source
 * Return: dest = dest + src
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int len2 = 0;

	while (*(dest + len) != '\0')
		len++;
	while (*(src + len2) != '\0')
	{
		*(dest + len) = *(src + len2);
		len++;
		len2++;
	}
	*(dest + len) = '\0';
	return (dest);
}
