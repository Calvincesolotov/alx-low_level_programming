#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line
 * @s: int to be used
 * Return: always 0
 */

	void print_rev(char *s)
{
	int r, d;

	d = 0;
	while (s[d] != '\0')
		d++;

	for (r = d - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
