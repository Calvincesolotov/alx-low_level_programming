#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @c:the character to be located
 * @s:string to be used to locate c
 * Return:return pointer to c or
 * return null if not found
 */

	char *_strchr(char *s, char c)
{
		int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
