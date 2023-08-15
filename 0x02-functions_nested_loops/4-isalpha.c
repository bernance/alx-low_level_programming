#include "main.h"

/**
* _isalpha - a function that checks if a letter is uppercase
* @c: This is the arguments passed into the function
* Return: 1 if the letter is uppercase and 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
