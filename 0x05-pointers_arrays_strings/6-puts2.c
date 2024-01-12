#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: int used
 * Return:always 0
 */

	void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	if (c % 2 == 0)
		_putchar(str[c]);

	_putchar('\n');



}
