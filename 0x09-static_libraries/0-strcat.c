#include "main.h"

/**
 * *_strcat - a fn that concatenates two string
 * @dest: this is input value
 * @src:this is input value
 * Return: void
 */

	char *_strcat(char *dest, char *src)
{
	char *t = dest;

		while (*dest != '\0')
		{
			dest++;
		}

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}

		*dest = '\0';
		return (t);
}
