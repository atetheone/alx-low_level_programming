#include "main.h"

/**
 * _sqrt_recursion - sqrt of n
 * @n: integer
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	int i;

	for (i = 1; i < n / 2; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (-1);
}
