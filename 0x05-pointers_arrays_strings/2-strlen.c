#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: returns the length of string
 * Return: always 0
 */

int _strlen(char *s)
{
	int lenth = 0;

	while (*s != '\0')
	{
		lenth++;
		s++;
	}

	return (lenth);
}
