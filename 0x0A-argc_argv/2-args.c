#include <stdio.h>

/**
 * main - prints character arguements passed
 * onto it in new line
 * @argc:the arguements parameter
 * @argv: the array parameter
 * Return:returns 0 if succesful
 */

	int main(int argc, char **argv)
{
	int m; /**
		*lets intintialize avariable m
		*/
	for (m = 0; m < argc; m++)

		printf("%s\n", argv[m]);

	return (0);
}
