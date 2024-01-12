#include "main.h"

/**
 * _puts_recursion - this fn prints string
 * @s:parameter used
 * Return:prints string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

		_putchar(*s);
		s++;
		 _puts_recursion(s);
}
