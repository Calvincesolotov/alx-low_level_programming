
#include "main.h"

/**
 * root - afn that check for the square root
 * of a number
 * @y:interger to be used
 * @z:interger
 *
 * Return: number
 */
int root(int y, int z)
{
	if (y * y == z)
		return (y);
	if (y * y > z)
		return (-1);
	return (root(y + 1, z));
}

/**
 * _sqrt_recursion - this fn returns the natural square root of a number
 * @n: help us find the sqr
 * Return: natural square root else return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root(1, n));
}
