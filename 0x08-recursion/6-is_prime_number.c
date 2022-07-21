#include "main.h"

int divisors(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (n % m == 0 || n == 1)
                return (0);
	else if (m < n)
                return (divisors(n, m + 1);
	else
		return (1);
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
        return (divisors(n, 2));
}
