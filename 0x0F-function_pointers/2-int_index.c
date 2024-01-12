#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *int_index - function search for interger
 *@size:is the number of elements in the array array
 *@array:the array
 *@cmp:pointer to nterger to be searched
 *Return:interger
 */


int int_index(int *array, int size, int (*cmp)(int))
{
		int n;


		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);


		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]))
				return (n);
		}
		return (-1);
}
