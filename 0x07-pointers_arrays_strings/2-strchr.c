#include "main.h"

/**
 * _strchr - first occ of c in s
 * @s: string s
 * @c: char c
 * Return: pointer to the first occ of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
