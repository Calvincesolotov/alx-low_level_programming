#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: the string to search
 * @needle: initial of the substring
 * Return: pointer to the beginning of the located substring
 * or zero if null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}

