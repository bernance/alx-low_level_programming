#include "main.h"

/**
* _puts - A function that prints a string followed by a newline
* @str: the string to be printed
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
