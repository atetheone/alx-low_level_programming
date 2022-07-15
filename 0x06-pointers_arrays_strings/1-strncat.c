#include "main.h"
<<<<<<< HEAD

/**
 * _strncat - concatenation of two strings
 * @dest: first string, the destination
 * @src: second string, the source
 * @n: number of letters to concatenate from the second string
 * Return: dest = dest + src(from 0 to n)
=======
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
>>>>>>> 05c80e363570862372a29536a59bd12a7495722f
 */

char *_strncat(char *dest, char *src, int n)
{
<<<<<<< HEAD
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
=======
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
>>>>>>> 05c80e363570862372a29536a59bd12a7495722f
	return (dest);
}
