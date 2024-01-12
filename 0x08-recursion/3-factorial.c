#include "main.h"

/**
 * factorial - prints factorial of number
 * @n: the number
 * Return: factorial of the number
 */

	int factorial(int n)
{
	int k;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	else
	{
		k = n * factorial(n - 1);
	}
		return (k);
}
