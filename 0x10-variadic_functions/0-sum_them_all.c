#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - the fn adds all the numbers
 * @n: parameters passed
 * Return: returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int m;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
