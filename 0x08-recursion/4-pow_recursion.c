#include "main.h"

/**
 * _pow_recursion - power of a number
 * @x: integer
 * @y: integer
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	else
		return (x * _pow_recursion(x, (y - 1) / 2) * _pow_recursion(x, (y - 1) / 2));
}
