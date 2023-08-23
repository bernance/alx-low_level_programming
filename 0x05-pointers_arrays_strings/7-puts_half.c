#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: the string to be halved
*/

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
