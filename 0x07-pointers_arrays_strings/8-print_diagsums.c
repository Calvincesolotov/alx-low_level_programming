#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to the start
 * @size: how wide it is
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, w;

	sum1 = 0;
	sum2 = 0;

	for (w = 0; w < size; w++)
	{
		sum1 = sum1 + a[w * size + w];
	}

	for (w = size - 1; w >= 0; w--)
	{
		sum2 += a[w * size + (size - w - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
