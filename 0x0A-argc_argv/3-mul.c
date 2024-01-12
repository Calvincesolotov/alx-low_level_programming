#include <stdio.h>
#include <stdlib.h>

/**
 * main- a fn that prints multiplication of two number
 * @argc:number of arguements
 * @argv:arguements
 * Return: returns 0
 */
	int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);

	}

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);

	return (0);
}
