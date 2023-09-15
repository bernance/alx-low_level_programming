#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - addition function
* @a: int 1
* @b: int 2
* Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtraction function
* @a: int 1
* @b: int 2
*
* Return: subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplication
* @a: int 1
* @b: int 2
*
* Return: multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division function
* @a: int 1
* @b: int 2
*
* Return: division
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
* op_mod - modulus function
* @a: int 1
* @b: int 2
*
* Return: mod
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
