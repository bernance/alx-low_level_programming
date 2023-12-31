#include "main.h"

/**
* factorial - A function that returns the factorial of a number
* @n: the number to be checked
* Return: -1 if n is less than 0 or the factorial of the number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
