#include "main.h"
/**
 * *_strcpy - copies the string pointed to
 * @src: char to check
 * @dest: char to check
 * Return: 0 is success
 */

	char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
		dest[p] = src[p];
	dest[p] = '\0';
	return (dest);


}
