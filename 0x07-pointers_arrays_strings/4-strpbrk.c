#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - strpbrk
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to the first occ of a char of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}
	return (NULL);
}
