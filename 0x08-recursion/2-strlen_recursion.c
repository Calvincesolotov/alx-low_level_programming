#include "main.h"

/**
 * _strlen_recursion - afn that prints lenth of a string
 * @s:int
 * Return:return lenth of string
 */

	int _strlen_recursion(char *s)
{
	/*
	 * base character
	 */
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
