#include "main.h"

/**
 * _puts - a function that prints a string, followed by
 *  a new line, to stdout
 *  @str: int that prints string
 *  Return:Always 0
 */

	void _puts(char *str)
{
		int j = 0;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
				j++;
		}

		_putchar('\n');
}
