#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
  * op_add - adds and b
  * @a: first arguement
  * @b: sec arguement
  * Return: sum of and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - substract a and b 
  * @a: first argue
  * @b: sec arguemnt
  * Return: result 
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies and b
  * @a: first arguement
  * @b: sec arguement
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - fn divides
  * @a: first arguement
  * @b: sec arguement
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - finds modulus
  * @a: first number
  * @b: sec number
  * Return: result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
