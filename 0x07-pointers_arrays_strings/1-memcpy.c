#include "main.h"

/**
 * *_memcpy - a fn that copies memory area
 * @dest: the destination to copy to
 * @src:the source of the what should be copied
 * @n: content to be copied
 * Return:return pointer to destination(dest)
 */

	char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int kopy = 0;

		while (kopy < n)
		{
			dest[kopy] = src[kopy];
			kopy++;
		}

		return (dest);
}
