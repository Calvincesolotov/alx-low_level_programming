#include "main.h"

/**
 * *_strpbrk - a fn that searches a string for bytes
 * @s: teh intial charcter of the string
 * @accept:string to be searched
 * Return:Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

	char *_strpbrk(char *s, char *accept)
{
		int m;/*lets intialize memory location m
			*/
		while (*s)
		{
			for (m = 0; accept[m]; m++)
			{
				if (*s == accept[m])
					return (s);
			}
			s++;
		}
	return ('\0');
}
