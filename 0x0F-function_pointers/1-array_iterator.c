#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes fn given as parameter
 * @array: the array given
 * @size:elements size
 * @action:pointer to be printed
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t m;

	if (array && action)
	{
		m = 0;
		while (m < size)
		{
			action(array[m]);
			m++;
		}
	}
}
