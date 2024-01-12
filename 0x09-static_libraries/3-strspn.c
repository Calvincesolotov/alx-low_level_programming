#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s:the start of
 * @accept:the string we use for the substring finding
 * Return:should return bytes function that gets the
 * length of a prefix substring.
 */

	unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				n++;
				break;
			}
			else if (accept[q + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
