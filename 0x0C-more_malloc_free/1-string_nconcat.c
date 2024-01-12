#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string we use to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, f;
	char *s;

	if (s1 == NULL)
	{
		a = 0;
	}

	else
	{

		for (a = 0; s1[a]; ++a)
		;

	}

	if (s2 == NULL)
	{

		for (b = 0; s2[b]; ++b)
		;

	}

	if (b > n)

		b = n;
	s = malloc(sizeof(char) * (a + b + 1));

	if (s == NULL)

		return (NULL);

	for (f = 0; f < a; f++)
		s[f] = s1[f];
	for (f = 0; f < b; f++)
		s[f + a] = s2[f];
	s[a + f] = '\0';
	return (s);

}
