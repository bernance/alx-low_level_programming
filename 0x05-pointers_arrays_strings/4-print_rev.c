#include "main.h"

/**
* print_rev - this function prints a string in reverse
* @s: this is the string to be printed in reverse
*/


void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
