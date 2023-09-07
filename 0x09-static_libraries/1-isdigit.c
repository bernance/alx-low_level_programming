#include "main.h"
#include <stdio.h>

/**
* _isdigit - this function checks for digits
* @c: this is the argument for the function
* Return: 1 if it is a digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
		return (0);
}
