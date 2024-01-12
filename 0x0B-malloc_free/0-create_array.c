#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - a fn that creates an array of
 *charcters and initialises it with specific char
 *@size:the data type name
 *@c:first value to be allocated
 *Return:NULL if size = 0 and a pointer to the array, or
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int n;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array[n] = c;

	return (array);
}
