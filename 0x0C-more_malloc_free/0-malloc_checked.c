#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: memory allocation use this
 *
 * Return: a pointer to the allocated memory
 */

	void *malloc_checked(unsigned int b)
{


	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);

	return (m);

}
