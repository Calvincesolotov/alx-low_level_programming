#include "main.h"


/**
 * print_alphabet_x10 - Function prints the alphabet in
 * lower case ten times
 * Return: 0 if successful
 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}

