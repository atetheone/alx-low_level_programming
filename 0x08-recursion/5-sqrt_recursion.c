#include "main.h"

/**
 * _sqrt_recursion - sqrt of n
 * @n: integer
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	return (rec_sqrt(n, 1));
}

/**
 * rec_sqrt - sqrt checker
 * @n: integer
 * @x: counter
 * Return: sqrt(n)
 */
int rec_sqrt(int n, int x)
{
	if (x == n)
		return (-1);
	if (x * x == n)
		return (x);
	return (rec_sqrt(n, x + 1));
}
