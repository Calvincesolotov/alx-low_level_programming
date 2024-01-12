#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - fn that duplicate to new memory space location
 * @str: character used
 * Return: 0 i succesful
 */
char *_strdup(char *str)
{
	char *niu;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	niu = malloc(sizeof(char) * (i + 1));

	if (niu == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		niu[r] = str[r];

	return (niu);
}
