#include "main.h"
#include <stdio.h>

/**
* _isupper - This function checks for uppercase characters
* @c: thisis the argument passed into the function
* Return: 1 for uppercase and 0 for lowercase
*/


int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);

}
