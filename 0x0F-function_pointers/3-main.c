#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Prints the result of  operations.
 * @argc: The number of arguments given to the program
 * @argv: array of pointers to the arguments.
 * Return: Always 0
*/

int main(int argc, char *argv[])

	int (*pointa)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pointa = get_op_func(argv[2]);

	if (!pointa)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", pointa(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
