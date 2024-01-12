#include "main.h"

/**
 * _print_rev_recursion - it prints string in reverse
 * @s:int
 * Return: returns string
 */

	void _print_rev_recursion(char *s)
{	/*assume int s = "alx\0"
	  */
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
