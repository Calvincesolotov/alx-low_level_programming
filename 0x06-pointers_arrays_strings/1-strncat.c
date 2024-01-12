#include "main.h"

/**
 * _strncat - fn that concatenates two strings
 *
 * @src: The origin of strings
 * @dest: The origin of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, p;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}
	for (p = 0; src[p] != '\0' && p < n; p++)
	{
		dest[m + p] = src[p];
	}
	dest[m + p] = '\0';
	return (dest);
}
