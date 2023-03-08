#include "main.h"

/**
 * is_prime - checks integer as prime
 * @n: number
 * @i: integer
 * Return: 1 if prime number
 */

unsigned int is_prime(unsigned int n, unsigned int i)
{
	if (n == 1)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - returns the prime number of the given numbers
 * @n: number
 * Return: prime number
 */

unsigned int is_prime_number(unsigned int n)
{
	return (is_prime(n, 2));
}
