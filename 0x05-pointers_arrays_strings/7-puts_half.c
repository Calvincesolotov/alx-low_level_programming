#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: int that prints it
 * Return:0 success
 */

void puts_half(char *str)
{
	int string = 0, h;

	while (str[string] != '\0')
		string++;
	if (string + 1 % 2 != '0')
		h = (string - 1) / 2;
	else
		h = (string / 2);
	h++;

	for (string = h; str[string] != '\0'; string++)
	_putchar(str[string]);
	_putchar('\n');


}
