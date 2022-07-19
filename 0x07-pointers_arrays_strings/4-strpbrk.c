#include "main.h"

/**
 * _strpbrk - strpbrk
 * @s: pointer to char
 * @accept: pointer to char
 * Return: pointer to the first occ of a char of accept in s
 */

char *strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
	}
	return (0);
}
