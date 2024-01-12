#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - selects the correct function to perform
  * the operation asked by the user
  * @s: pointer
  * Return: A pointer to the function corresponding
  *  to the operator given as a parameter
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int y = 0;

	while (y < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[y].f);

		y++;
	}

	return (0);
}
