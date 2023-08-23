#include "main.h"

/**
* puts2 - a function that prints every other character
* @str: the string
*/

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
