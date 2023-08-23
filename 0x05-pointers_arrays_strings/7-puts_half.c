#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: the string to be halved
*/

void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int j;

	while (str[i++])
	{
		len++;
	}
	if (len % 2 == 0)
	{
		j = len / 2;
	}
	else
		j = (len + 1) / 2;
	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
