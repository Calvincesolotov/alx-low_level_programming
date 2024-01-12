#include "main.h"

int look_prime(int n, int i);

/**
 * is_prime_number - evaluates if an integer is a prime number or not
 * @n: parameter to evaluate
 *
 * Return: 1 if n is a prime number, else return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (look_prime(n, n - 1));
}

/**
 * look_prime - calculates if a number is prime
 * @n: number to check
 * @i: iterates
 *
 * Return: 1 if n is prime, else return 0
 */
int look_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (look_prime(n, i - 1));
}
