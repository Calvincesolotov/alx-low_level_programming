#include "main.h"

/**
 * *_memset - this fn fills  memory space n pointed to s with
 * @b: number of bytes
 * @s: the constant bytes
 * @n: amount of memory location
 * pointed by s
 * Return:Returns a pointer to the memory area s
 */

	char *_memset(char *s, char b, unsigned int n)
{
		unsigned int m = 0; /* lets initialize memory location
				       *with variable m
				       */

			while (m < n) /*as long as location m is less than
					*n bytes
					*/

			{
			s[m] = b;/*fill it with b number of bytes
				  */
			m++;
			}

		return (s);
}
