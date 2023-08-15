#include "main.h"

/**
* _islower - A function that checks if a letter is lowercase or not
* @c: the argument for the function
* Return: 1 for lowercase and 0 for otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
