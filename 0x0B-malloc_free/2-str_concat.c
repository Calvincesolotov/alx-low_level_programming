#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one
 * @s2: input two
 * Return: concation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *konkat;
	int i, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = m = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[m] != '\0')
		m++;
	konkat = malloc(sizeof(char) * (i + m + 1));

	if (konkat == NULL)
		return (NULL);
	i = m = 0;
	while (s1[i] != '\0')
	{
		konkat[i] = s1[i];
		i++;
	}

	while (s2[m] != '\0')
	{
		konkat[i] = s2[m];
		i++, m++;
	}
	konkat[i] = '\0';
	return (konkat);
}
