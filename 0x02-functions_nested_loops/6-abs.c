#include "main.h"

/**
*  _abs - A function that prints the absolute value of a number
*  @n: the argument to be checked
*  Return: 0
*/

int _abs(int n)
{

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
